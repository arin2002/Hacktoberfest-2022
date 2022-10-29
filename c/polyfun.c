#include <stdio.h>
#include<stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node *link;
};

void input(struct node **head, int a, int b) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->coeff = a;
    temp->exp = b;
    temp->link = NULL;
    if (*head == NULL) {
        *head = temp;
        return;
    }else{
        temp->link = (*head);
        *head = temp;
        return;
    }
}

void print(struct node *head) {
    struct node *b = head;
    if (!b) {
        printf("\nThe Polynomial is now empty.");
        return;
    }
    while (b) {
        if (b->link)
            printf("(%d)(x^%d) + ", b->coeff, b->exp);
        else
            printf("(%d)(x^%d)", b->coeff, b->exp);
        b = b->link;
    }
}

struct node *add(struct node *head1, struct node *head2) {
    struct node *head = NULL;
    int b[100];
    int i = 0;
    while (head1) {
        struct node *temp = head2;
        int a = head1->coeff;
        while (temp) {
            if (head1->exp == temp->exp) {
                a = a + temp->coeff;
            }
            temp = temp->link;
        }
        b[i++] = head1->exp;
        input(&head, a, head1->exp);
        head1 = head1->link;
    }
    while (head2)
    {
        int p = 0;
        for (int j = 0; j < i; j++)
        {
            if (head2->exp == b[j])
            {
                p = 1;
                break;
            }
        }
        if (p == 0)
            input(&head, head2->coeff, head2->exp);
        head2 = head2->link;
    }

    return head;
}

struct node *sub(struct node *head1, struct node *head2) {
    struct node *head = NULL;
    int b[100];
    int i = 0;
    while (head1) {
        struct node *temp = head2;
        int a = head1->coeff;
        while (temp) {
            if (head1->exp == temp->exp)
                a = a - temp->coeff;
            temp = temp->link;
        }
        b[i++] = head1->exp;
        input(&head, a, head1->exp);
        head1 = head1->link;
    }
    while (head2){
        int p = 0;
        for (int j = 0; j < i; j++){
            if (head2->exp == b[j]){
                p = 1;
                break;
            }
        }
        if (p == 0)
            input(&head, (-1 * head2->coeff), head2->exp);
        head2 = head2->link;
    }

    return head;
}

struct node *larpow(struct node *head) {
    struct node *b = head;
    int a = b->exp;
    while (head) {
        if( (head->exp) > a) {
            a = head->exp;
            b = head;
        }
        head = head->link;
    }
    return b;
}

struct node *larcoeff(struct node *head) {
    struct node *b = head;
    int a = b->coeff;
    while (head) {
        if( (head->coeff) > a) {
            a = head->coeff;
            b = head;
        }
        head = head->link;
    }
    return b;
}

int main() {
    struct node *head1 = NULL;
    struct node *head2 = NULL;

    printf("Enter the number of terms in polynomial 1: ");
    int n,x,y;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        printf("Enter the coefficient followed by the exponent ");
        scanf("%d %d", &x,&y);
        input(&head1,x,y);
    }
    printf("\n");
    printf("Enter the number of terms in polynomial 2: ");
    int m;
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        printf("Enter the coefficient followed by the exponent ");
        scanf("%d %d", &x,&y);
        input(&head2,x,y);
    }

    struct node *head;
    head = add(head1, head2);

    printf("\n\nSum Of Polynomials : \n");
    print(head);

    head = sub(head1, head2);

    printf("\n\nPolynomial 1 - Polynomial 2 : \n");
    print(head);

    head = sub(head2, head1);

    printf("\n\nPolynomial 2 - Polynomial 1 : \n");
    print(head);

    struct node *max_1 = larpow(head1);
    struct node *max_2 = larpow(head2);

    printf("\n\nLargest Exponent in Polynomial 1 : \n");
    printf("(%d)(x ^ %d)", max_1->coeff, max_1->exp);
    printf("\n\nLargest Exponent in Polynomial 2 : \n");
    printf("(%d)(x ^ %d)", max_2->coeff, max_2->exp);
    
    struct node *max_11 = larcoeff(head1);
    struct node *max_22 = larcoeff(head2);

    printf("\n\nLargest Coefficient in Polynomial 1 : \n");
    printf("(%d)(x^%d)", max_11->coeff, max_11->exp);
    printf("\n\nLargest Coefficient in Polynomial 2 : \n");
    printf("(%d)(x^%d)", max_22->coeff, max_22->exp);
    


    return 0;
}

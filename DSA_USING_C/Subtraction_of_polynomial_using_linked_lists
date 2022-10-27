#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
int data1;
int data2;
struct node *next;
} *p = NULL,
*p1 = NULL,
*p2 = NULL,
*head = NULL,
*head1 =NULL,
*head2 = NULL;
void insertEnd(struct node **temp, int x, int y)
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
newnode->data1 = x;
newnode->data2 = y;
if (*temp == NULL)
{
*temp = newnode;
newnode->next = NULL;
}
else
{
p = *temp;
while (p->next != NULL)
{
p = p->next;
}
p->next = newnode;
newnode->next = NULL;
}
}
int main()
{
printf("The first polynomial equation \n");
int deg1;
printf("Enter the degree of the equation: \n");
scanf("%d", &deg1);
int n1 = deg1;
while (n1 >= 0)
{
int coeff1;
printf("Enter the coefficient of x with degree %d\n", n1);
scanf("%d", &coeff1);
insertEnd(&head1, coeff1, n1);
n1--;
}
printf("The second polynomial equation \n");
int deg2;
printf("Enter the degree of the equation:\n");
scanf("%d", &deg2);
int n2 = deg2;
while (n2 >= 0)
{
int coeff2;
printf("Enter the coefficient of x with degree %d\n", n2);
scanf("%d", &coeff2);
insertEnd(&head2, coeff2, n2);
n2--;
}
printf("The resultant difference of the two polynomial equation is: \n");
p1 = head1;
p2 = head2;
if (deg1 > deg2)
{
while (deg1 != deg2)
{
printf("%d(x^%d) + ", p1->data1, p1->data2);
p1 = p1->next;
deg1--;
}
while (p1->next != NULL)
{
printf("%d(x^%d) + ", p1->data1 - p2->data1, p1->data2);
p1 = p1->next;
p2 = p2->next;
}
printf("%d(x^%d) ", p1->data1 - p2->data1, p1->data2);
}
else
{
while (deg1 != deg2)
{
printf("%d(x^%d) + ", p2->data1, p2->data2);
p2 = p2->next;
deg2--;
}
while (p2->next != NULL)
{
printf("%d(x^%d) + ", p1->data1 - p2->data1, p2->data2);
p2 = p2->next;
p1 = p1->next;
}
printf("%d(x^%d) ", p1->data1 - p2->data1, p2->data2);
}
}


/* Given a string containing n S’s and n X’s where S indicates a PUSH operation 
and X indicates a POP operation, and with the STACK initially empty, formulate 
a rule to check whether a given string S of operations is admissible or not */


#include <stdio.h>
#include <string.h>
#define N 15
int st[N], top = -1;
void push(int st[], int value)
{
    if (top == N - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        st[top] = value;
    }
}
int pop()
{
    int flag = 1;  // it is valid stack
    if (top == -1)
    {
        flag = 0;
        // means the underflow cond print The entered string is invalid
    }
    else
    {
        top--;
    }
    return flag;
}
int main()
{
    int n;
    printf("Enter the size of string : ");
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    // int st[n] delcared globally
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'S')   // according to question S means pushing the element in stack
        {
            push(st, i);
        }
        else if (arr[i] == 'X')   // acc. to que X means pop a element from stack
        {
            int check = pop();
            if (check == 0)    // means the function return 0 --> invalid
            {
                printf("Invalid String");
                break;
            }
        }
    }
    printf("\nvalue : %d \n", top);  // for intercheck printing the number element in stack
    for (int i = top; i >= 0; i--) 
    {
        printf("%d \n", st[i]);
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int sub,c;

    printf("Enter class and number of subject failed:");
    scanf("%d %d",&c,&sub);

    switch(c)
    {
        case 1:
        {
            if(sub<=3)
            {
                printf("Grace marks will be %d\n",sub*5);
            }
            else{
                printf("No grace marks\n");
            }
            break;
        }
        case 2:
        {
            if(sub<=2)
            {
                printf("%d grace marks will be given\n",4*sub);
            }
            else
            {
                printf("No Grace marks\n");
            }
            break;
        }
        case 3:
        {
            if(sub==1)
            {
                printf("5 grace marks will be given\n");
            }
            else
            {
                printf("No grace marks\n");
            }
            break;
        }
        default:
        {
            printf("User choose wrong class\n");
        }
    }




}
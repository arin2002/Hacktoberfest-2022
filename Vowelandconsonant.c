#include<stdio.h>
int main()
{
    printf("SAP ID 500107150 \n");
    char vovel[5] = {'a','e','i','o','u'};
    char ch;
    printf("enter any character : ");
    scanf("%c",&vovel[ch]);
    switch (vovel[ch])
    {
    case 'a':
        printf("vovel");
        break;
    case 'e':
        printf("vovel");
        break;
    case 'i':
        printf("vovel");
        break;
    case 'o':
        printf("vovel");
        break;
    case 'u':
        printf("vovel");
        break;
    
    default:
        printf("it's a consonant");
    }
    return 0;
}

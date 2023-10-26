#include <stdio.h>

#include <conio.h>

void main( )

{

int i, j, temp, n, num, ar[100];

char ch;

clrscr( );

do

{

printf ("\nEnter the size of the array \n");

scanf ("%d", &n);

printf("Enter the elements of the array \n");

for (i=1; i<=n;i++)

{

scanf("%d", &ar[i]);

}

printf("   Select the option \n");

printf("1. Ascending order: \n");

printf("2. Descending order: \n");

scanf("%d",&num);

switch(num)

{

case 1:

for (i=1; i<=n-1;i++)

{

for (j=1; j<=n-i;j++)

{

if(ar[j]>ar[j+1])

{

temp=ar[j];

ar[j]=ar[j+1];

ar[j+1]=temp;

}

}

}

printf("Sorted array in ascending order is \n");

for (i=1; i<=n;i++)

{

printf("%d ",ar[i]);

}

break;

case 2:

for (i=1; i<=n-1;i++)

{

for (j=1; j<=n-i;j++)

{

if(ar[j]<ar[j+1])

{

temp=ar[j];

ar[j]=ar[j+1];

ar[j+1]=temp;

}

}

}

printf("\nSorted array in descending order is \n");

for (i=1; i<=n;i++)

{

printf("%d ",ar[i]);

}

break;

default:

printf("Wrong selection \n");

break;

}

printf("\n Press 'Y' to continue and any other key to terminate : ");

flushall( );

ch=getch( );

}while (ch == 'Y');

getch( );
}

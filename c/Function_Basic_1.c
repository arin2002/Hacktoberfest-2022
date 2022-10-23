#include<stdio.h>

void function();            // Function Prototype or Declaration
int main()
{
    printf("Initialization of Display\n");
    function();         // Function Call
    printf("Function Display Finished\n");
    return 0;
}
void function()             // Function Definition or Implementation 
{
    printf("This is Display\n");
}
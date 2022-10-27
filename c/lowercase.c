#include <stdio.h>

int main(void) {
	char u[50] = "HELLOWORLD,CS604 STUDENTS!";

	
    
    for(int i=0;u[i]!='\0';i++){
      if(u[i]>=65&&u[i]<=90){
         u[i]=u[i]+32;
      }
   }
    
    
	printf("%s\n",u);
	return 0;

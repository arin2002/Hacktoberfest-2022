


#include <iostream>
using namespace std;
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int i=0,j=0,k=0,size,carry=0;
    if(size1>size2){
        size=size1+1;
    }
    else{
        size=size2+1;
    }
   for (i=0;i<size;i++){
       
       if(i<size1&&i<size2){
          int result;
           result=input1[size1-1-i]+input2[size2-1-i]+carry;                  //result of last index sums
           carry=result/10;                                                 //taking two digits to carry like from 13 the 1 
           output[size-1-i]=result%10;                                       //adding the sost signuficant digit to last
           
           
           
           
           }
       else{
           break;
       }
       
       }
   if(i>=size1){
       while(i<size){
           int result;
           result=input2[size2-1-i]+carry;          
           carry=result/10;
           
     output[size-1-i]=result%10;  
           i++;
       
    } 
   } 
  else{
      
       while(i<size){
           int result;
           result=input1[size1-1-i]+carry;
           carry=result/10;
           
     output[size-1-i]=result%10;  
       i++;
   }
      
      
      
  }  
       
    
    
    
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}
//WAP to print hollow sphere 
#include <iostream>
using namespace std;

int main() 
{
  int a,b,s;
  cout<<"Enter size of square: ";
  cin>>s;
  for(a=1;a<=s;a++) 
  {
    for(b=1;b<=s;b++) 
    {
      if(a==1 || a==s)
       
        cout<<"*";
       
      
      else if(b==1 || b==s) 
        
          cout<<"*";
        
        else 
        
          cout<<" ";
        
      
    }
    cout<<"\n";
  }
  return 0;
}

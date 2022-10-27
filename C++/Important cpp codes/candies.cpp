#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(i=0;i<n;i++){
        maxNo=max(maxNo,a[i]);
        minNo=min(minNo,a[i]);
    }
    int candies;
    string b[n];
    cin>>candies;
  for(i=0;i<n;i++){
    int k=a[i]+candies;
    if(k>=maxNo){
        b[i]="true";
    }
    else{
        b[i]="false";
    }
  }
  cout<<"[";
  for(i=0;i<n;i++){
    cout<<b[i]<<",";
  }
  cout<<"]";
}

#include <iostream>
using namespace std;
int main() {
    cout<<"Program To Rotate An Array in Anticlockwise direction"<<endl;
int as;
cout<<"Input Array Size"<<endl;
cin>>as;
int array[as];
cout<<"Please input array elements one by one:"<<endl;
for(int i=0;i<as;i++){
        cout<<"enter "<<i+1<<" th element"<<endl;
        cin>>array[i];
    }

    int temp[as];
    cout<<"please input the shifting constant"<<endl;
    cout<<"Your Entered Array Is"<<endl;
    for(int i=0;i<as;i++){

        cout<<array[i]<<" ";
    }
    cout<<endl;
    int a;
    cin>>a;
    for(int i=0;i<as;i++){
        temp[i]=array[i];
    }
    for(int i=0;i<as;i++){
        if(i-a<0){
            array[i-a+as]=temp[i];
        }else{
        array[i-a]=temp[i];
    }
    }
    cout<<"Your Rotated Array Is"<<endl;
    for(int i=0;i<as;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
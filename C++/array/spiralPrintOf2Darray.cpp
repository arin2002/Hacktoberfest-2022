#include<iostream>
using namespace std;

int main(){
    int arr[100][100];
    int n,m;
    cout<<"Enter the size of 2d array: ";
    cin>>n>>m;
    int value =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=value;
            value+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Spiral print of the given 2d array is :::::"<<endl;
    cout<<endl;
    int sr=0;//starting row
    int sc=0;//starting column
    int ec=m-1;//ending column
    int er=n-1;//ending row
    while(sr<=er and sc<=ec){
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }
        ec--;
        if(er>sr){
            for(int i=ec;i>=sc;i--){
            cout<<arr[er][i]<<" ";
        }
        er--;
        }
        if(sc<ec){
            for(int i=er;i>=sr;i--){
            cout<<arr[i][sc]<<" ";
        }
        sc++;
        }
        


    }

    return 0;
}
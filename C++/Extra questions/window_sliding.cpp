/*Exersice:
1)N-bonacci numbers,print first M , N-bonacci number 
 fibonacci=2-bonacci every element is sum of perivous two number
 tribonacci=3-bonacci every elenmts is sum of perivous three numbers
 N=3,M=8
 must first (N-1) are always zero(addition perivous 3 numbers)
 0 0 1 1 2 4 7 13 
 2)count distict elements in every  window of size k
 ex: arr[]={1,2,1,3,4,3,3}
 k(size)=4
 {1,2,1,3} {2,1,3,4} {1,3,4,3} {3,4,3,3}
 0/p= distict elenmts
  3          4          3        2*/
  #include<iostream>
  using namespace std;
  void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  }
  void bonacci(int arr[],int M,int N){
    for(int i=0;i<N-1;i++){
        arr[i]={0};
    }
    arr[N-1]={1};
    for(int i=N;i<M;i++){
        arr[N]=arr[i-(N-1)]+arr[i-(N-1)]+arr[i-N];
    }
  }
  int main()
  {int arr[]={1,2,1,3,4,3,3};
  bonacci(arr,8,3);
  print(arr,8);
   return 0 ;
  }

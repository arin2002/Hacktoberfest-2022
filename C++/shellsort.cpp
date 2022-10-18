
# include<iostream>
# include<time.h>
# include<climits>
# include<chrono>
using namespace std;

void shellSort(int arr[], int n) {

  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = arr[i];
      int j;
      for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
        arr[j] = arr[j - interval];
      }
      arr[j] = temp;
    }
  }
}

int main(){
    int n;
    int t;
    cin>>t;
    for(int i=0; i<t ;i++){
    cin>>n;
    int * arr= new int [n];
    for(int i=0; i<n; i++){
       arr[i]=rand();
    }
    auto start = std::chrono::high_resolution_clock::now();
    shellSort(arr,n);
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
     long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
    cout<<"time:"<<microseconds<<"microseconds \n";

}
}


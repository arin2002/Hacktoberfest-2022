#include <stdio.h>  
int linearSearch(int a[], int n, int val) {  
  // Going through array sequencially  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        return i+1;  
    }  
  return -1;  
}  
int main() {  
  int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52}; // given array  
  int val = 41; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int res = linearSearch(a, n, val); // Store result  
  printf("The elements of the array are - ");  
  for (int i = 0; i < n; i++)  
  printf("%d ", a[i]);   
  printf("\nElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}  
Output

Linear Search Algorithm
Program: Write a program to implement linear search in C++.

#include <iostream>  
using namespace std;  
int linearSearch(int a[], int n, int val) {  
  // Going through array linearly  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        return i+1;  
    }  
  return -1;  
}  
int main() {  
  int a[] = {69, 39, 29, 10, 56, 40, 24, 13, 51}; // given array  
  int val = 56; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int res = linearSearch(a, n, val); // Store result  
  cout<<"The elements of the array are - ";  
  for (int i = 0; i < n; i++)  
  cout<<a[i]<<" ";    
  cout<<"\nElement to be searched is - "<<val;    
  if (res == -1)  
  cout<<"\nElement is not present in the array";  
  else  
  cout<<"\nElement is present at "<<res<<" position of array";  
  return 0;  
}  

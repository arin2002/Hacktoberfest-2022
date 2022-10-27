// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include<iostream>
#include<algorithm>
using namespace std;
  
// A structure to represent a job
struct Job
{
   char id;     
   int dead;   
   int profit;  
};
  
// sorting all jobs according to profit
bool comparison(Job a, Job b)
{
     return (a.profit > b.profit);
}
  
// Returns minimum number of platforms required
void printJobScheduling(Job arr[], int n)
{
   
    sort(arr, arr+n, comparison);
  
    int result[n]; 
    bool slot[n];  
    
    for (int i=0; i<n; i++)
        slot[i] = false;
  
    
    for (int i=0; i<n; i++)
    {
       
       for (int j=min(n, arr[i].dead)-1; j>=0; j--)
       {
          
          if (slot[j]==false)
          {
             result[j] = i;  
             slot[j] = true; 
             break;
          }
       }
    }
  
    
    for (int i=0; i<n; i++)
       if (slot[i])
         cout << arr[result[i]].id << " ";
}
  

int main()
{
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs \n";
    
    printJobScheduling(arr, n);
    return 0;
}
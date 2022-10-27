/* We have given weight of an items their values
            I1  I2  I3
I/P: weight: 50  20  30
     value : 600 500 400
     capacity is 70
Step: 1)Find  the ratio of value/weight
      for given example the value/weight ratio is as I1=600/50=12,I2=500/20=45,I3=400/30=40/3
      2) sort the items according to decreasing value of value/weight ratio
       after sorting I2  I3  I1
              weight:20  30   50
              value: 500 400  600
      3)  after sorting if first item weight i.e I2.weight<capacity take whole item
           intially resultant value(rv) be 0;
           after taking first element the rv=rv+value
           capcity=capacity-item.weight
           else if item.weight>capcity
           rv=rv+(item.value*current_capacity/item.original weight)
           return rv
    */

#include <bits/stdc++.h>
using namespace std;
class fractional_knapsack
{
public:
    double weight;
    double value;
    
};
bool comparison(fractional_knapsack I1, fractional_knapsack I2)
{
       double ratio_1=I1.value/I1.weight;
       double ratio_2=I2.value/I2.weight;
    return (ratio_1>ratio_2);
}
double fkapsack(fractional_knapsack arr[], int n, int capacity)
{
    sort(arr,arr+n,comparison);
    double res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <=capacity)
        {
            res = res + arr[i].value;
            capacity = capacity - arr[i].weight;
        }
        else
        {
            res = res + (arr[i].value * (capacity / arr[i].weight));
            break;
        }
    }
    return res;
}

int main()
{
    fractional_knapsack arr[] = {{50, 600}, {20, 500}, {30, 400}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int capacity = 70;
    cout << fkapsack(arr, n, capacity);
    return 0;
}
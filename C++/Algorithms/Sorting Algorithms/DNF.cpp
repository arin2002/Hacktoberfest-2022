// Dutch National Flag Algorithm
/*
3 pointers le liya low, medium, high ke name se
low aur medium ko 0th index se initialize karke point diya
high ko last index se initialize karke point kar diya

ab loog chalega jab tak medium high se kam ya to equal hoga

loop ke andar:
        agar arr[middle] 0 ke equal hua to arr[low] aur arr[medium] dono ko apas me swap karke Low aur Medium dono ko agle index pe point kar do
        agar arr[middle] 1 ke equal hua to sirf middle ke pointer ko increase kar dena hai
        agar arr[middle] 2 ke equal hua to sirf high ke pointer ko decrease karna hai

*/
#include<iostream>
using namespace std;

void swap(int arr[], int x, int y){
    int z = arr[x];
    arr[x] = arr[y];
    arr[y] = z;
}

void dnf(int nums[], int size){
    int low = 0, medium = 0, high = size-1;

    while(medium <= high){
        // if(nums[medium] == 0)
        //     swap(nums, low, medium);
        //     low++;
        //     medium++;
        // if(nums[medium] == 1)
        //     medium++;
        // if(nums[medium] == 2)
        //     swap(nums, medium, high);
        //     high--;
        switch (nums[medium])
        {
        case 0:
            swap(nums, nums[low], nums[medium]);
            low++;
            medium++;
            break;
        case 1:
            medium++;
            break;
        case 2:
            swap(nums, nums[medium], nums[high]);
            high--;
        
        default:
            cerr<<"This can't be sorted using Dutch Nation Flag!"<<endl;
            break;
        }
            
    }
}
int main(){
    int arr[] = {0, 1, 0, 1, 0, 2, 2};
    int size = sizeof(arr)/sizeof(arr[1]);

    dnf(arr, size);

    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
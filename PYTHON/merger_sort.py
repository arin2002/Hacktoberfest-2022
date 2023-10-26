#!/bin/python3


# #Time: nlog(n) | Space: nlog(n)
def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr)//2

        L = arr[:mid]
        R = arr[mid:]

        mergeSort(L)   #Divide and conquer
        mergeSort(R)   #Divide and conquer

        i = j = k = 0

        # Checking if any element was left
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

    return arr

print(mergeSort([9,8,7,6,5,4,3,21213,2,4,5,2,1]))



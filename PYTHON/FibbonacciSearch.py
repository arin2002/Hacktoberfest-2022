# Algorithm : Fibbonacci Search 
# Time Complexity : O(log n)
# Explanation :
    # Series : Fk+2 = Fk+1 + Fk , k ≥ 0
    # 1.Set k = m.
    # 2.If k = 0, stop. There is no match, the item is not in the array.
    # 3.Compare the item against element in Fk−1.
    # 4.If the item matches, stop.
    # 5.If the item is less than entry Fk−1, discard the elements from positions Fk−1 + 1 to n.
    # 6.Set k = k − 1 and return to step 2.
    # 7.If the item is greater than entry Fk−1, 
    # 8.discard the elements from positions 1 to Fk−1.
    # 9.Renumber the remaining elements from 1 to Fk−2, set k = k − 2, and return to step 2.


def FibonacciSearch(lys, val):
    fibM_minus_2 = 0
    fibM_minus_1 = 1
    fibM = fibM_minus_1 + fibM_minus_2
    while (fibM < len(lys)):
        fibM_minus_2 = fibM_minus_1
        fibM_minus_1 = fibM
        fibM = fibM_minus_1 + fibM_minus_2
    index = -1
    
    while (fibM > 1):
        i = min(index + fibM_minus_2, (len(lys)-1))
        if (lys[i] < val):
            fibM = fibM_minus_1
            fibM_minus_1 = fibM_minus_2
            fibM_minus_2 = fibM - fibM_minus_1
            index = i
        elif (lys[i] > val):
            fibM = fibM_minus_2
            fibM_minus_1 = fibM_minus_1 - fibM_minus_2
            fibM_minus_2 = fibM - fibM_minus_1
        else :
            return i
        
    if(fibM_minus_1 and index < (len(lys)-1) and lys[index+1] == val):
        return index+1
    return -1

ans = FibonacciSearch([10,15,25,30,40,50], 15)
print(ans)
# #!/bin/python3  

# #Time: O(nlog(n)) | Space: O(nlog(n))
def swap(elements, a, b):
    if a!=b:
        tmp = elements[a]
        elements[a] = elements[b]
        elements[b] = tmp

def partition(elements, start, end):
    pivotIdx = start
    pivot_element = elements[pivotIdx]
   

    while start < end:

        while start < len(elements) and elements[start] <= pivot_element:
            start += 1

        while pivot_element < elements[end]:
            end -= 1

        if start < end:
            swap(elements, start, end)
    
    swap(elements, pivotIdx, end)

    return end




def quick_sort(elements, start, end):
    if start < end:
        pi = partition(elements, start, end)
        quick_sort(elements, start, pi-1)  #left
        quick_sort(elements, pi+1, end)    #right
 


if __name__ == '__main__':
    elements = [11,9,29,7,2,15,28]
    # elements = ["mona", "dhaval", "aamir", "tina", "chang"]
    quick_sort(elements, 0, len(elements)-1)
    print(elements)


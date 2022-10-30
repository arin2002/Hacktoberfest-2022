#Python program for interpolation search

def ipSearch(arr, lo, hi, x):


	if (lo <= hi and x >= arr[lo] and x <= arr[hi]):


		pos = lo + ((hi - lo) // (arr[hi] - arr[lo]) *
					(x - arr[lo]))

		if arr[pos] == x:
			return pos

		if arr[pos] < x:
			return ipSearch(arr, pos + 1,
									hi, x)


		if arr[pos] > x:
			return ipSearch(arr, lo,
									pos - 1, x)
	return -1

arr = [20, 23, 43, 27, 29, 31, 30,
	32, 33, 34, 35, 44, 46, 53, 58]
n = len(arr)


x = 43
index = ipSearch(arr, 0, n - 1, x)

if index != -1:
	print("Element found at index", index)
else:
	print("Element not found")

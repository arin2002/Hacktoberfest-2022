def search(arr, size, item):

	for i in range(0, size):
		if (arr[i] == item):
			return i
	return -1

if __name__ == "__main__":
	arr = [2, 3, 4, 8, 13, 24, 10, 40]
	item = 13
	size = len(arr)

	result = search(arr, size, item)
	if(result == -1):
		print("Element is not present in array")
	else:
		print("Element is present at index", result)

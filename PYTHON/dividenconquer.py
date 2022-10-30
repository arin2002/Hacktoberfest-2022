# Divide and Conquer algorithm using python

def DNC_Max(a, index, l):
	max = -1
	if(l - 1 == 0):
		return a[index]
	if (index >= l - 2):
		if (a[index] > a[index + 1]):
			return a[index]
		else:
			return a[index + 1]

	max = DNC_Max(a, index + 1, l)

	if (a[index] > max):
		return a[index]
	else:
		return max



def DNC_Min(a, index, l):
	min = 0
	if(l - 1 == 0):
		return a[index]
	if (index >= l - 2):
		if (a[index] < a[index + 1]):
			return a[index]
		else:
			return a[index + 1]


	min = DNC_Min(a, index + 1, l)

	if (a[index] < min):
		return a[index]
	else:
		return min

if __name__ == '__main__':

	min, max = 0, -1

	a = [140, 500, 100, 160, 280, 24, 28]

	max = DNC_Max(a, 0, 7)

	min = DNC_Min(a, 0, 7)
	print("Minimum Value : ", min)
	print("Maximum Value : ", max)

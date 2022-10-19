<script>
// Below is Javascript code to sort the Big integers in
// ascending order

// comp function to perform sorting
function comp(left, right)
{

	// if length of both string are equals then sort
	// them in lexicographically order
	if (left.length == right.length)
		return left < right;

	// Otherwise sort them according to the length
	// of string in ascending order
	else
		return left.length - right.length;
}

// Function to sort arr[] elements according
// to integer value
function SortingBigIntegers(arr, n)
{

	// Copy the arr[] elements to sortArr[]
	let sortArr = [...arr]

	// Inbuilt sort function using function as comp

	sortArr.sort(comp);

	// Print the final sorted array
	for (ele of sortArr)
		document.write(ele + " ");
}

// Driver code of above implementation
let arr = ["54", "724523015759812365462",
	"870112101220845", "8723"]
let n = arr.length

SortingBigIntegers(arr, n);

// This code is contributed by gfgking.
</script>

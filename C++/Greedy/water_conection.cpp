// C++ program to find efficient
// solution for the network
#include <cstring> // For memset
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::memset;
using std::vector;
// number of houses and number
// of pipes
int number_of_houses, number_of_pipes;

// Array rd stores the
// ending vertex of pipe
int ending_vertex_of_pipes[1100];

// Array wd stores the value
// of diameters between two pipes
int diameter_between_two_pipes[1100];

// Array cd stores the
// starting end of pipe
int starting_vertex_of_pipes[1100];

// Vector a, b, c are used
// to store the final output
vector<int> a;
vector<int> b;
vector<int> c;

int ans;

int dfs(int w)
{
	if (starting_vertex_of_pipes[w] == 0)
		return w;
	if (diameter_between_two_pipes[w] < ans)
		ans = diameter_between_two_pipes[w];
	return dfs(starting_vertex_of_pipes[w]);
}

// Function performing calculations.
void solve(int arr[][3])
{
	for (int i = 0; i < number_of_pipes; ++i) {

		int house_1 = arr[i][0], house_2 = arr[i][1],
			pipe_diameter = arr[i][2];

		starting_vertex_of_pipes[house_1] = house_2;
		diameter_between_two_pipes[house_1] = pipe_diameter;
		ending_vertex_of_pipes[house_2] = house_1;
	}

	a.clear();
	b.clear();
	c.clear();

	for (int j = 1; j <= number_of_houses; ++j)

		/*If a pipe has no ending vertex
		but has starting vertex i.e is
		an outgoing pipe then we need
		to start DFS with this vertex.*/
		if (ending_vertex_of_pipes[j] == 0
			&& starting_vertex_of_pipes[j]) {
			ans = 1000000000;
			int w = dfs(j);

			// We put the details of component
			// in final output array
			a.push_back(j);
			b.push_back(w);
			c.push_back(ans);
		}

	cout << a.size() << endl;
	for (int j = 0; j < a.size(); ++j)
		cout << a[j] << " " << b[j] << " " << c[j] << endl;
}

// driver function
int main()
{
	number_of_houses = 9, number_of_pipes = 6;

	memset(ending_vertex_of_pipes, 0,
		sizeof(ending_vertex_of_pipes));
	memset(starting_vertex_of_pipes, 0,
		sizeof(starting_vertex_of_pipes));
	memset(diameter_between_two_pipes, 0,
		sizeof(diameter_between_two_pipes));

	int arr[][3]
		= { { 7, 4, 98 }, { 5, 9, 72 }, { 4, 6, 10 },
			{ 2, 8, 22 }, { 9, 7, 17 }, { 3, 1, 66 } };

	solve(arr);
	return 0;
}

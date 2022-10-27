// C++ program for Multiplication of two matrices
/*
Input:
n=3 m=3
MATRIX 1:
1   2   3
4   5   6
7   8   9
MATRIX 2:
1   2   3
4   5   6
7   8   9
Output:
Multiplication of given two matrices is:
30      36      42
66      81      96
102     126     150
*/
#include <iostream>
#include <vector>
using namespace std;
void mulMat(vector<vector<int>> mat1, vector<vector<int>> mat2)
{
	int R1=mat1.size(); // number of rows in Matrix-1
	int C1=mat1[0].size(); // number of columns in Matrix-1
	int R2=mat2.size(); // number of rows in Matrix-2
	int C2=mat2[0].size(); // number of columns in Matrix-2
	int rslt[R1][C2];

	cout << "Multiplication of given two matrices is:\n";

	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C2; j++) {
			rslt[i][j] = 0;

			for (int k = 0; k < R2; k++) {
				rslt[i][j] += mat1[i][k] * mat2[k][j];
			}

			cout << rslt[i][j] << "\t";
		}

		cout << endl;
	}
}
int main()
{
	int n,m,i,j;
	int R1; // number of rows in Matrix-1
	int C1; // number of columns in Matrix-1
	int R2; // number of rows in Matrix-2
	int C2; // number of columns in Matrix-2
    cout<<"Enter size of the First Matrix: ";
    cin>>R1>>C1;
    vector<vector<int>> Mat1,Mat2;
    cout<<"Enter Elements in first Matrix:\n";
    for(i=0;i<R1;i++){
		vector<int>a;
		for(j=0;j<C1;j++){
			int v;
            cin>>v;
			a.push_back(v);
        }
		Mat1.push_back(a);
    }
	cout<<"Enter size of the Second Matrix: ";
    cin>>R2>>C2;
    cout<<"Enter Elements in second Matrix:\n";
    for(i=0;i<R2;i++){
		vector<int>a;
		for(j=0;j<C2;j++){
			int v;
            cin>>v;
			a.push_back(v);
        }
		Mat2.push_back(a);
    }
	if (C1 != R2) {
		cout << "The number of columns in Matrix-1 must "
				"be equal to the number of rows in "
				"Matrix-2"
			<< endl;

		exit(EXIT_FAILURE);
	}

	// Function call
	mulMat(Mat1, Mat2);
	return 0;
}

// Time Complexity = O(R1 * C2 * R2)

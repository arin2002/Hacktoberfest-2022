#include <iostream>
#include <limits.h>

using namespace std;

void matrix_chain_order(int* order, int **min_scalar_mults, int **optimal_split_pos, int n)
{
    for (int i = 1; i <= n; i++)
    {
        min_scalar_mults[i][i] = 0;
    }

    for (int length = 2; length <= n; length++)
    {
        int i, j;
        for (i = 1; i <= (n - length + 1); i++)
        {
            j = (i + length - 1);
            min_scalar_mults[i][j] = INT_MAX;
            int k, scalar_mults;
            for (k = i; k < j; k++)
            {
                scalar_mults = min_scalar_mults[i][k] + min_scalar_mults[k + 1][j] + (order[i-1] * order[k] * order[j]);
                if (scalar_mults < min_scalar_mults[i][j])
                {
                    min_scalar_mults[i][j] = scalar_mults;
                    optimal_split_pos[i][j] = k;
                }
            }
        }
    }
}

void print_optimal_parens(int** optimal_split_pos, int start, int end)
{
    if (start == end) 
        cout << "A" << start << " ";

    else {
        cout << "(";
        print_optimal_parens(optimal_split_pos, start, optimal_split_pos[start][end]);
        print_optimal_parens(optimal_split_pos, optimal_split_pos[start][end] + 1, end);
        cout << ")";
    }
}

int main()
{
    int n;
    cout << "Enter the number of matrices in the chain: <A, B, C, ..., > ";
    cin >> n;

    // matrices are A1, A2, A3 ..., An

    int* order = new int[n + 1];
    cout << "Enter the order of matrices: <p0, p1, ... ,pn> ";
    for (int i = 0; i <= n; i++)
    {
        cin >> order[i];
    }

    // A1(p0 x p1), A2(p1 x p2), ..., An(p(n-1) x pn)

    // min_scalar_mults[i][j] stores minimum number of scalar multiplications required to multiply matrices Ai to Aj
    int** min_scalar_mults = new int*[n+1];
    for (int i=0; i<=n; i++) {
        *(min_scalar_mults + i) = new int[n+1];
    }
    
    // optimal_split_pos[i][j] stores optimal splitting position required to multiply matrices Ai to Aj
    int** optimal_split_pos = new int*[n+1];
    for (int i=0; i<=n; i++) {
        *(optimal_split_pos + i) = new int[n+1];
    }

    matrix_chain_order(order, min_scalar_mults, optimal_split_pos, n);

    cout << "\nThe minimum number of scalar multiplications required to multiply the matrices are: " << min_scalar_mults[1][n];

    cout << "\nThe optimal way to multiply the matrices is: ";

    print_optimal_parens(optimal_split_pos, 1, n);

    return 0;
}
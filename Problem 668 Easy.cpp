// This problem was asked by Google.

// In linear algebra, a Toeplitz matrix is one in which the elements on any given diagonal from top left to bottom right are identical.

// Here is an example:

// 1 2 3 4 8
// 5 1 2 3 4
// 4 5 1 2 3
// 7 4 5 1 2
// Write a program to determine whether a given input is a Toeplitz matrix.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Take the input. n means rows and m means a column in mxn matrix.
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mal(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mal[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int k = mal[i][0], c = i;
        for (int j = 0; j < n && c < m; j++)
        {
            if (k != mal[c][j])
            {
                cout << "Input is not a Toeplitz matrix.";
                return 0;
            }
            c++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int k = mal[0][i], c = i;
        for (int j = 0; j < m && c < n; j++)
        {
            if (k != mal[j][c])
            {
                cout << "input is a not Toeplitz matrix.";
                return 0;
            }
            c++;
        }
    }

    cout << "Input is a Toeplitz matrix.";
    return 0;
}
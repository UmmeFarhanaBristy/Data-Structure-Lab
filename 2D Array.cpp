#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "size of the array (n X n): ";
    int n, i, j, k = 0, a;
    cin >> n;
    int array2D[n][n], array1D[n*n+5];
    cout << "Inputs: ";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> array2D[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            array1D[k++] = array2D[i][j];
        }
    }

    cout << "Which group to print: ";
    cin >> a;
    for(i = (n * (a-1)); i < (n * a); i++)
    {
        cout << array1D[i];
    }
    return 0;
}

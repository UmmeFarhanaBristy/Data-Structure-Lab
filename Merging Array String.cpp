#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i , j = 0;

    cout << "Number of inputs for array1: ";
    cin >> a;
    string ar1[a];
    cout << "Inputs: ";
    for(i = 0; i < a; i++)
    {
        cin >> ar1[i];
    }

    cout << "Number of inputs for array2: ";
    cin >> b;
    string ar2[b];
    cout << "Inputs: ";
    for(i = 0; i < b; i++)
    {
        cin >> ar2[i];
    }

    string ar3[a+b];
    for(i = 0; i < a+b; i++)
    {
        if(i < a)
            ar3[i] = ar1[i];
        else
            ar3[i] = ar2[j++];
    }

    for(i = 0; i < a+b; i++)
    {
        cout << ar3[i] << " ";
    }

    cout << endl;
    return 0;
}

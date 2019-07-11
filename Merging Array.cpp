#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the size of array1: ";
    cin >> a;
    cout << "/nEnter the entries of array1: ";

    int ar1[a], i, j=0;

    for(i = 0; i < a; i++)
    {
        cin >> ar1[i];
    }

    cout <<"Enter the size of array2:";
    cin >> b;
    cout << "/nEnter the entries of array2: ";

    int ar2[b], ar3[a+b];

    for(i = 0; i < b; i++)
    {
        cin >> ar2[i];
    }

    for(i = 0; i < a+b; i++)
    {
        if(i < a)
            ar3[i] = ar1[i];
        else
            ar3[i] = ar2[j++];
    }

    cout << "After merging: "<< endl;

    for(i = 0; i< a+b; i++)
    {
        cout << ar3[i] << " ";
    }
    return 0;
}

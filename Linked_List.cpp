#include<bits/stdc++.h>
using namespace std;

//taking inputs.
int input()
{
    int n;
    cin >> n;
    return n;
}

typedef struct Node node;

struct Node {
    int data;
    node* nxt;
};

//creating linked list
node* createList(node* root, int data)
{
    node* newNode = new node();

    newNode -> data = data;
    newNode -> nxt = NULL;

    if (root == NULL)
        return newNode;

    root -> nxt = newNode;
    return newNode;
}

int main()
{
    node* root = NULL, *ptr = NULL;

    cout << "Number of inputs: ";
    int dataSet = input();

    cout << "Enter the numbers: ";

    for(int i = 0; i < dataSet; i++)
    {
        // putting data to the root of the list
        if(i == 0)
        {
            int data = input();
            root = createList(root, data);
            ptr = root;
        }

        //putting data to the list except root
        else
        {
            int data = input();
            ptr = createList(ptr, data);
        }
    }
    ptr = root;

    int maxValue = root->data;
    int minValue = root->data;
    int total = 0;

    cout << "\n\nThe list is:";

    while(ptr != NULL)
    {
        cout << " " << ptr -> data;

        //Finding the maximum value
        if(ptr->data >= maxValue) maxValue = ptr->data;

        //Finding the minimum value
        if(ptr->data <= minValue) minValue = ptr->data;

        total = total + ptr->data;

        ptr = ptr -> nxt;
    }

    //finding the average value
    double average = double(total) / dataSet;

    cout << "\nThe maximum value is " << maxValue;
    cout << "\nThe minimum value is " << minValue;
    cout << "\nTotal = " << total;
    cout << "\nAverage = " << average << endl;

    return 0;
}

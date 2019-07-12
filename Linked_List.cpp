#include<bits/stdc++.h>
using namespace std;

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
    int n = input(), i;

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            int data = input();
            root = createList(root, data);
            ptr = root;
        }

        else
        {
            int data = input();
            ptr = createList(ptr, data);
        }
    }
    ptr = root;

    cout << "The list is: ";

    while(ptr != NULL)
    {
        cout << " " << ptr -> data;
        ptr = ptr -> nxt;
    }

    return 0;
}

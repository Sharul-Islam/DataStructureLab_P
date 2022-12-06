#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
};

node* crteNode(int value)
{
    node* newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
node* insert( node* root, int data)
{
    if (root == NULL) return crteNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

return root;
}

void inorder(node* root)
{
    if(root == NULL)return;
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}


int main()
{
    node *root = NULL;
    int x;
    cout << "Enter values" << endl;
    cin >> x;
    int no;
    for (int b=0; b < x; b++)
    {
        cin >>x;
        root=insert(root, no);
    }
inorder(root);

return 0;
}


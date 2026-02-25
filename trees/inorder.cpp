#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* right;
        Node* left;

        Node(int value){
            data = value;
            right = left = NULL;
        }
};

Node* makeTree(int arr[], int i, int n){
    Node* root = NULL;
    if(i<n){
        root = new Node(arr[i]);
        root->left = makeTree(arr, 2*i+1, n);
        root->right = makeTree(arr, 2*i+2, n);
    }
    return root;
}

// Point to remember : inorder is always sorted in ascending order

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(){
    int n;
    cin >> n;
    int arr[n] = {0};
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    inOrder(makeTree(arr, 0, n));
}


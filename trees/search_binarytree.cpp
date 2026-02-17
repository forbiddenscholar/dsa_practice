#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data = value;
            left = NULL;
            right = NULL;
        }
};

int search(int x, Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->data == x){
        return 1;
    }
    if(x < root->data){
        search(x, root->left);
    } 
    else {
        search(x, root->right);
    }
}

int findMin(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL) return root->data;
    findMin(root->left);
}

int findMax(Node* root){
    if(root == NULL) return 0;
    if(root->right == NULL) return root->data;
    findMax(root->right);
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->right = new Node(9);
    cout << findMin(root) << endl;
    cout << findMax(root) << endl;
}
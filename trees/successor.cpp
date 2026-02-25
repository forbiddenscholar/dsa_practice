#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data = value;
            right = left = NULL;
        }
};

int inorderPredecessor(Node* root, Node* p){
    int predecessor = 0;
    while(root != NULL){
        if(root->data >= p->data){
            root = root->left;
        }
        else{
            predecessor = root->data;
            root = root->right;
        }
    }
    return predecessor;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->left->right->left = new Node(3);
    root->right = new Node(7);
    root->right->left = new Node(6);
    root->right->right = new Node(9);
    root->right->right->left = new Node(8);
    root->right->right->right = new Node(10);
    cout << inorderPredecessor(root, root->left) << endl;
}
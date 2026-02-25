#include <bits/stdc++.h>
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

int height(Node* root){
    
    if(root == NULL || root->left == NULL && root->right == NULL){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(1);
    root->right = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(4);
    cout << height(root) << endl;
}
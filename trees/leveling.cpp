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

void level(Node* root){
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    Node* temp = q.front();
    q.pop();
    cout << temp->data << " " ;
    if(temp->left != NULL){
        q.push(temp->left);
    }
    if(temp->right != NULL){
        q.push(temp->right);
    }
  }  
}

int main(){
    Node* root = new Node(4);
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(9);
    Node* d = new Node(1);
    Node* e = new Node(5);
    Node* f = new Node(7);
    Node* g = new Node(6);
    Node* h = new Node(8);
    root->left = a;
    root->right = e;
    a->left = b;
    b->right = c;
    c->left = d;
    e->right = g;
    e->left = f;
    g->left = h;
    level(root);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* head = new Node(1);

void print(Node* node){
    if(node == NULL){
        return;
    }
    cout << node->data << " ";
    print(node->next);
}

void reversePrint(Node* node){
    if(node == NULL){
        return;
    }
    reversePrint(node->next);
    cout << node->data << " ";
}

void reverse(Node* node){
    if(node->next == NULL){
        head = node;
        return;
    }
    reverse(node->next);
    Node* temp = node->next;
    temp->next = node;
    node->next = NULL;
}

int main(){
    head->next = new Node(2);
    head->next->next = new Node(3);
    print(head);
    cout << "\nReversed printing: " << endl;
    reversePrint(head);
    // reversing the linked list
    reverse(head);
    cout << "\nReversed the links:" << endl;
    print(head);
}
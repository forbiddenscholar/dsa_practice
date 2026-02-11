#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    Node* newNode = new Node(); // this is enough in C++
    // for c, we use malloc 
    // Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};


struct Node* head;

void Insert(int value,int pos){
    struct Node* newNode = createNode(value);
    if(pos == 1){
        newNode->next = head; // first make the link
        // then remove and join another
        head = newNode;
        return;
    }
    struct Node* temp = head;
    for(int i=0; i<pos-2; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void Delete(int pos){
    struct Node* temp1 = head;
    if (pos == 1){
        head = temp1->next;
        return;
    }
    for(int i=0; i<pos-2; i++){
        temp1 = temp1->next;
    }
    temp1->next = temp1->next->next;
}

void Reverse(){
    struct Node* current = head;
    struct Node* prev = NULL;
    
}

void Print(){
    struct Node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "\n" ;
}

int main(){
    head = NULL;
    Insert(1, 1);
    Insert(2, 2);
    Insert(3, 2);
    Insert(4, 1);
    Print();
    Delete(1);
    Print();
    return 0;
}
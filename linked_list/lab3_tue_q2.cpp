#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int data) {
    // TODO: Allocate memory
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
    // TODO: Assign data
    temp->data = data;  
    // TODO: Initialize next pointer
    temp->next = NULL: 
    return temp;
}

void createList(int n) {
    int value;
    struct Node *temp, *newNode;
    // TODO: Read n entry numbers
    for(int i=0; i<n; i++){
        scanf("%d", &value);
        newNode = createNode(value);

        if (head == NULL){
            head = newNode;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // TODO: Create and link nodes
}

void traverse() {
    // TODO: Traverse and print entry numbers
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int search(int key) {
    // TODO: Search for entry number
    int position = 1;
    struct Node* temp=head;
    // TODO: Return position or -1
    while(temp != NULL){
        if(temp->data == key){
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

void reverse() {
    // TODO: Reverse the linked list
}

int main() {
    int n, key, pos;
    // TODO: Read input
    scanf("%d", &n);
    createList(n);
    traverse();
    scanf("%d", &key);
    pos = search(key);  
    if (pos != -1)
        printf("Element found at position %d\n", pos);
    else
        printf("Element not found\n");
    // TODO: Call required functions
    reverse();
    traverse();
    return 0;
}

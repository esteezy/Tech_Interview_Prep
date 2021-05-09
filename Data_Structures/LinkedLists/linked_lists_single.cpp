//basic overview of linked lists
#include <stdlib.h>
#include <iostream>
using namespace std;
 
class Node {
    public:
    int data;
    Node *next;
};

//traverse linked list
void traversal(Node *curr){
    printf("data: ");
    while(curr != nullptr){
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

//push node to list
void push_front(Node **head, int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = (*head);
    (*head) = new_node;
}

//delete node with matching key
bool deleteNode1(Node **head, int key){
    //save head
    Node* temp = (*head);
    Node* prev = nullptr;
    
    //head holds key
    if(temp != nullptr && temp->data == key){
        (*head) = temp->next;
        delete temp;
        return true; //successful
    }

    //search for matching key
    while(temp != nullptr && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    
    if(temp != nullptr){
        //unlink 
        prev->next = temp->next;
    }
    //unsuccessful
    delete temp;
    return false;
}

int main(){
    //init nodes
    Node* head = nullptr;
    Node* mid = nullptr;
    Node* tail = nullptr;
    //call constr for each node
    head = new Node();
    mid = new Node();
    tail = new Node();
    //link & add data
    head->data = 1;
    head->next = mid;
    mid->data = 2;
    mid->next = tail;
    tail->data = 3;
    tail->next = nullptr;
    //push new elements using push()
    push_front(&head, 4);
    push_front(&head, 5);
    push_front(&head, 6);

    traversal(head);
    deleteNode1(&head, 5);
    traversal(head);
    deleteNode1(&head, 6);
    traversal(head);

    return 0;
}


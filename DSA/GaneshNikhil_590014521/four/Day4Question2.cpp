#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to insert a node at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// find intersection 
Node *intersection(Node* head1 , Node* head2){
    Node *new_head = nullptr;
    Node *temp = new_head;
    Node *first = head1;
    Node *second = head2;

    while(first != nullptr && second != nullptr){
        if(first->data == second->data){
            if(new_head == nullptr){
                new_head = new Node(first->data);
                new_head->next = nullptr;
                temp = new_head; // ✅ Fix
            }
            else{
                temp->next = new Node(first->data);
                temp = temp->next;
                temp->next = nullptr;
            }
            first = first->next;
            second = second->next;
        }
        else if(first->data < second->data){
            first = first->next;
        }
        else {
            second = second->next;
        }
    }
    return new_head;
}


int main() {
    Node* head1 = nullptr;  // Create an empty list
    Node* head2 = nullptr;
    int size1 , size2 , input;

    cout<<"Make sure input is in increasing order "<<endl;
    cout<<"size of first list: ";
    cin >> size1;
    cout<<"Enter "<<size1<<" elements in :";
    for(int i = 0 ; i < size1 ; i++){
        cin>>input;
        insertAtEnd(head1 , input);
    }

    cout<<"size of second list: ";
    cin >> size2;
    cout<<"Enter "<<size2<<" elements in :";
    for(int i = 0 ; i < size2 ; i++){
        cin>>input;
        insertAtEnd(head2 , input);
    }
    
    cout << "Linked List: "<<endl;
    printList(head1);
    printList(head2);


    Node *new_head = intersection(head1 , head2);
    cout << "Intersection Linked List: "<<endl;
    printList(new_head);

    return 0;
}

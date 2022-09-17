#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //making up a constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

void insertAtStart(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    //head = head -> next;
    head = temp;
}

void insertAtTail(Node* &tail, int d){          //here in this fucntion we have taken reference so changes can occur in linklist
                                                // itself not in the copy of it
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
    //tail = temp;
}

void insertAtPosition(Node* head, int pos, int d){    
    Node* temp = head;
    int cnt = 1;

    //to traverse the node till position
    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }

    Node* insert_mid = new Node(d);
    insert_mid -> next = temp -> next;
    temp -> next = insert_mid;

}

void print(Node* &head){
    Node* temp = head;

    while(head!=NULL){
        cout<<temp->data<<endl;
        temp = temp ->  next;
    }
    cout<<endl;
}



int main(){

    Node* node1= new Node(23);

    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    //since at start there is only one node 
    Node* head = node1;

    //since at start there is only one node tail and head would be same 
    Node* tail = node1;

    insertAtStart(head,11);
    insertAtStart(head,12);

    insertAtTail(tail,88);

    insertAtPosition(head,2 ,21);

    print(head);

}
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
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* head){
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

    print(head);

}
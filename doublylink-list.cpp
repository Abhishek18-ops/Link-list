#include<iostream>
using namespace std;


//Make a Node.
class Node{
    public: 
        int data;
        Node* prev;
        Node* next;
    Node(int val){
        data = val;
        prev=NULL;
        next =NULL;
    }
};


//Insert Node at the head of the linkedlist 


void insertNodeat_head(Node* &head , int val){
    Node* n = new Node(val);
    Node* temp = head;
    n->next = head;
        n->prev = NULL;
    if(head != NULL){
        head->prev = n;

    }
    head = n;
}
//Insert a node  after a Node 


void insertnodeafter_node(Node* &previous, int val){
    if(previous == NULL){
        return ;
    }
    Node* n = new Node(val);
    n->next = previous->next;
    previous->next = n;
    n->prev = previous;
    if(n->next!=NULL){
        n->next->prev = n;
    }
    

}
//insert a Node at the End of the linkedlist 

void insertatteil(Node* &head,int val){
    Node* n  = new Node(val);

    if(head == NULL){
        n->next = head;
        n->prev =NULL;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    }

//Finally print the linkedlist

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

//Driver code 

int main(){

    Node* head = NULL;
    insertNodeat_head(head,1);
    insertNodeat_head(head,2);
    insertNodeat_head(head,3);
    insertNodeat_head(head,4);
    insertNodeat_head(head,5);
    insertatteil(head,6);
    // insertnodeafter_node(head->prev,4);


    display(head);

}
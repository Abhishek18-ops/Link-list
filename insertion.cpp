#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertatTail(Node* &head,int val){
    Node* n = new Node(val);
    Node* temp = head;

    if(head == NULL){
        head = n;
        return ;
    }
    while(temp->next!=NULL){
        temp = temp->next;

    }
    temp->next = n;

}
void display(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        insertatTail(head,arr[i]);
    }
    display(head);

}


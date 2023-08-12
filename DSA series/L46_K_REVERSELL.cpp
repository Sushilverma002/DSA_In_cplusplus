#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    //BASE CASE
    if(head==NULL){
        return head;
    }
    //step 1 to reverse
    Node*next=NULL;
    Node*curr=head;
    Node*prev=NULL;
    int count=0;

    while(curr  !=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    //recusrsion vall
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
    //step 3 
    return prev;
}
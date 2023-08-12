
// Remove Duplicates From Sorted List


Node * uniqueSortedList(Node * head) {
    // Write your code here.
    //empty linked list
    if(head==NULL)
    return NULL;

    //NON EMPTY LIST
    Node*curr=head;

    while(curr!=NULL){
    if((curr->next !=NULL) && curr->data==curr->next->data){
        Node*next_nex=curr->next->next;
        Node*Nodetodelete=curr->next;
        delete(Nodetodelete);
        curr->next=next_nex;
    } else {
      curr=curr->next;
    }
    }
    return head;
}
/*``````````````````````SINGLY LINKED LIST```````````````````````

#include <iostream>
#include <map>
using namespace std;

//cretaing a node
class structNode{
    public:
    int data;
    structNode*next;

    //constructor
    structNode(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~structNode(){
        int value= this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value    <<endl;
    }
};
     
    //insertion at begnning
    void insertionAthead(structNode* &head,int d){

        //new node create
        structNode*ptr=new structNode(d);
        ptr-> next=head;
        head=ptr;
    }
    
    //insetion at tail
    void insertionAtail(structNode* &tail,int d){

        //new node create
        structNode*ptr=new structNode(d);
        tail-> next=ptr;
        tail=ptr;
    }

    void print(structNode* &head){
        structNode*ptr=head;

        while(ptr!=NULL){
            cout<<ptr ->data<<" ";
            ptr=ptr ->next;
        }
        cout<<endl;
    }

// insertion at middle
    void insertionatmiddle(structNode*&tail ,structNode*&head,int position,int d){
    //insert at start
    if(position==1){
        insertionAthead(head,d);
        return;
    }
    structNode*ptr=head;
    int cnt=1;

    while(cnt<position-1){
        ptr=ptr->next;
        cnt++;
    }

    //inserting at last position 
    if(ptr->next==NULL){
        insertionAtail(tail,d);
        return;
    }

    //creating new node
    structNode*Nodetoinsert=new structNode(d);
    Nodetoinsert->next=ptr->next;
    ptr ->next=Nodetoinsert;
    }

    // deletion In linked list

    void deleteNode(int position ,structNode* &head){
        
        //DELETING FIRST OR START NODE
        if(position==1){
            structNode*ptr=head;
            head=head->next;
            //memory free
            free(ptr);
        }else{
            // deleting any middle node or last node
            structNode*curr=head;
            structNode*prev=NULL;

            int cnt=1;
            while(cnt < position){
                prev=curr;
                curr=curr->next;
                cnt++;
            }

            prev -> next=curr->next;
            curr->next =   NULL;
            delete curr;
        }
    }
bool detectLoop(structNode* head) {

    if(head == NULL)
        return false;

    map<structNode*, bool> visited;

    structNode* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

int main(){
    //created a new node
    structNode*node1=new structNode(10);
    //cout<<node1 -> data<<endl;
    //cout<<node1 -> next<<endl;

    //head pointer node1
    structNode*head=node1;
    structNode*tail=node1;
    print(head);

    // insertionAthead(head,12);
    // print(head);
    
    // insertionAthead(head,13);
    // print(head);

    insertionAtail(tail,12);
    print(head);
    
    insertionAtail(tail,13);
    print(head);

    insertionatmiddle(tail,head,4,14);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deleteNode(4,head);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


    //to detect wheather the linked list is circuular or not
    if(detectLoop(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
    return 0;
}*/


/*


```````````````````````DOUBLY LINKED LIST`````````````````

#include<iostream>
using namespace std;

    class node{
        public:
        int data;
        node*prev;
        node*next;

        //constructor
        node(int d){
            this->data=d;
            this->prev=NULL;
            this->next=NULL;
        }
        //destructor
        ~node(){
        int value= this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value    <<endl;
    }
};

//traversing of linked list
void print(node*head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//length of doubly linked list
int getlength(node*head){
    int len=0;
    node*temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

//Insertion at begining 
void insetionathead(node* &tail ,node * &head,int d){
    if(head==NULL){
    node *temp=new node(d);
    head=temp;
    tail=temp;
    }else{ 
        node *temp=new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

//Insertion at tail
void insertionatTail(node *&head, node *&tail ,int d){
    if(tail==NULL){
        node *temp=new node(d);
        tail=temp;
        head=temp;
    }else{
    node *temp=new node(d);

    tail->next=temp;
    tail->prev=tail;
    tail=temp;
    }
}

//insertion at any position 
void insertionAtAnyPosition(node *&tail ,node *&head,int position ,int d){
    //insert at start
    if(position==1){
        insetionathead(tail,head,d);
        return;
    }
    node*temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position 
    if(temp->next==NULL){
         insertionatTail(head,tail ,d);
        return;
    }

    //creating new node
    node*nodetoinsert=new node(d);

    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

// deletion In linked list

    void deleteNode(int position ,node* &head){
        
        //DELETING FIRST OR START NODE
        if(position==1){
            node*temp=head;
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            //memory free
            free(temp);
        }else{
            // deleting any middle node or last node
            node*curr=head;
            node*prev=NULL;

            int cnt=1;
            while(cnt < position){
                prev=curr;
                curr=curr->next;
                cnt++;
            }

            curr->prev=NULL;
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }







int main(){
    // node*node1= new node(10);
    // node*head=node1;
    // node*tail=node1;
    node*head= NULL;
    node*tail=NULL;

    print(head);
    //cout<<getlength(tail,head)<<endl;

    insetionathead(tail,head,9);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    insetionathead(tail,head,8);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    insetionathead(tail,head,7);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    insertionatTail(head,tail,11);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    insertionAtAnyPosition(tail,head,5,12);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deleteNode(3,head);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

}

*/

***********************CIRCULAR LINKED LIST********************

#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}


int main() {

    Node* tail = NULL;

   // insertNode(tail, 5, 3);
    //print(tail);

  //  insertNode(tail, 3, 5);
   // print(tail);


    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
   

    deleteNode(tail, 5);
    print(tail);
     

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}

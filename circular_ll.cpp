#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node *head;
void inserth(int data){
    node *temp=new node();
    
    temp->data=data;
    temp->next=head;

    if(head==NULL){
        head=temp;
        temp->next=head;
    }
    else{
        node *temp1=head;
        while(temp1->next!=head){
            temp1=temp1->next;
        }
        temp1->next=temp;
        head=temp;
    }
    
    
}

void insertt(int data){
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        temp->next=head;
    }
    else{
        node *temp1=head;
        while(temp1->next!=head){
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->next=head;
    }
}

bool isCircularList(node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}




void print(){
    node *temp=head;

    if(head==NULL){
        cout<<"cll is empty"<<endl;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);

    
}
int main(){

    head=NULL;
    int n,data;

    cout<<"size?";
    cin>>n;
    
    /*for(int i=0;i<n;i++){
        cout<<"enter element to insert:";
        cin>>data;
        inserth(data);
    }
    print();*/

    for(int i=0;i<n;i++){
        cout<<"data?";
        cin>>data;
        insertt(data);
    }

    print();

    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }


    return 0;
}
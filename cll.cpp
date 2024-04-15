#include<iostream>
#include "sorrttt.cpp"
#include "loop.cpp"
using namespace std;

Node* head;
void insert(int data)
{
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(head!=NULL){
        temp->next=head;

    }
    head=temp;

}
void insertend(int data)
{
    Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else
    {
        Node *temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    
}
void insertpos(int data,int pos)
{
    Node *temp=new Node;
    temp->data=data;
    temp->next=NULL;
    if(pos==1)
    {
        
        temp->next=head;
        head=temp;
        return; 
    }
    Node* temp1 =head;
    for(int i=0;i<pos-2;i++){
        temp1=temp1->next;
    }
 

}

void delete_start(){
    Node *temp=new Node();
    temp=head;
    head=head->next;
    free(temp);

}
void delete_end(){
    Node *temp=new Node();
    Node *temp1=new Node();
    temp=head;
    temp1=head->next;
    while(temp1->next!=NULL){
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next=NULL;
    free(temp1);
 

    
}
void delete_pos(int pos1){
    int ct=1;
    Node *temp=new Node;
    Node *temp2=new Node;
    temp=head;
    temp2=head->next;
    for(int i=0;i<pos1-1;i++){
        temp=temp->next;
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    free(temp2);


}   

void delete_val(int val){
    Node *temp=new Node();
    Node *temp2=new Node();
    temp=head;
    temp2=head->next;
    while(temp2->data!=val && temp2->next!=NULL){
        temp=temp->next;
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    free(temp2);



}
Node* rev(Node *head){
    if(head==NULL){
        return NULL;
    }
    
        Node *next=NULL;
        Node *curr=head;
        Node* prev=NULL;
        int ct=0,k;
        cout<<"enter noof nodes u wish to reverse : ";
        cin>>k;

        while(curr!=NULL && ct<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            ct++;

        }
        if(next!=NULL){
            head->next=rev(next);
        }

    

    return prev;
}



void print(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    int size,data,pos,pos1;
    head=NULL;
    cout<<"enter size : ";
    cin>>size;
    for (int i=0;i<size;i++)
    {
        cout<<"enter num : ";
        cin>>data;
        insert(data);
        print(head);
        
    }


    cout<<"original list:";
    print(head);

    head=sortt(head);

    cout<<"sorted list :";
    print(head);


    cout<<"unique sored list :";
    head=uniquesorted(head);
    print(head);


    cout<<"starting node is:";
    head= getStartingNode(head);
    cout<<head;


    while(head!=NULL){
        Node* temp=head;
        head=head->next;
        delete temp;
    }



    return 0;
}
#include "sll_sort.h"
Node *uniquesorted(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    Node* curr=head;

    while(curr!=nullptr){
        if((curr->next!=nullptr) && curr->data==curr->next->data){
            Node* next_next=curr->next->next;
            Node* to_be_deleted=curr->next;
            delete(to_be_deleted);
            curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

Node* sortt(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    Node* prev=nullptr;
    Node* curr=head;
    while(curr!=nullptr){
        Node* min=curr;
        Node* min_prev=prev;
        Node* temp=curr->next;
        while(temp!=nullptr){
            if(temp->data<min->data){
                min=temp;
                min_prev=curr;
            }
            temp=temp->next;
        }

        if(min!=curr){
            if(prev!=nullptr){
                prev->next=min;
            }
            else{
                head=min;
            }
            curr->next=min->next;
            min->next=curr;

        }
        prev=curr;
        curr=curr->next;

    }
    return head;
}
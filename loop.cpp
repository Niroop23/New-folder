#include "sll_sort.h"




Node* flyodloop(Node *head){
    if(head==nullptr){
        return nullptr;
    }
    Node* slow=head;
    Node* fast=head;

    while(slow!=nullptr && fast!=nullptr){
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            return slow;
        }
    }
    return nullptr;
}

Node* getStartingNode(Node* head){
    if(head==nullptr){
        return nullptr;
    }

    Node* start=flyodloop(head);

    if(start==nullptr){
        return nullptr;
    }

    Node* iter=head;
    while(iter!=start){
        iter=iter->next;
        start=start->next;
    }

    return iter;
}
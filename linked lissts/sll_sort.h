#pragma once

struct Node{
    int data;
    Node*next;
};


Node* uniquesorted(Node* head);
Node* sortt(Node* head);
Node* flyodloop(Node *head);
Node* getStartingNode(Node* head);
Node* remove_loop(Node* head);
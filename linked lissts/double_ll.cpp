#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node* prev;
};
Node* head;
Node* crtnewnode(int data) {
	Node* newnode=new Node();
	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
	 

}
void insertathead(int data)
{
	Node* temp = crtnewnode(data);
	if (head == NULL)
	{
		head = temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;
	 
}
void insertattail(int data) {
	Node* temp = crtnewnode(data);
	if (head == NULL) {
		head = temp;
		return;
	}
	Node* current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = temp;
	temp->prev = current;

	
}
void print() {
	Node* temp = head;
	cout << "forward: ";
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;

	}
	cout << "\n";
}
void revprt() {
	Node* temp = head;
	if (temp == NULL) {//if the list is empty exit
		return;
	}
	while (temp->next != NULL) {//going to last node
		temp = temp->next;

	}
	cout << "reverse: ";
	while (temp != NULL) {//traversing backwards using prev
		cout << temp->data << " ";
		temp = temp->prev;
	}
	cout << "\n";

}



int main()
{
	head = NULL;
	insertattail(5); 
	insertattail(3);
	insertattail(1);
	insertattail(-1); print(); revprt(); cout << "\n";
	insertathead(5);
	insertathead(3);
	insertathead(1);
	insertathead(-1); print(); revprt();
	return 0;
}
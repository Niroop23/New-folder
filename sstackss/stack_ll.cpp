#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*link;
};


class Stack{
    Node* top;
    public:
        Stack(){top=NULL;}



        void push(int x){
    Node *temp=new Node();
    if(!temp){
        cout<<"\nstack overflow";
        exit(1);

    }
    temp->data=x; 
    temp->link=top;;
    top=temp;


}

void pop(){
    Node *temp;
    if(top==NULL){
        cout<<"stack underflow";
        exit(1);
    }
    temp=top;
    top=top->link;
    free(temp);
}

bool isempty(){
    return top==NULL;
}

int topp(){
    if(!isempty())
        return top->data;
    
    else
        exit(1);
    

}
void display(){
    Node *temp;

    temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

};


int main(){

    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.display();

    cout<<"\nTop element is "<<s.topp()<<endl;


    s.pop();
    s.display();
    cout<<"\n";

    s.pop();
    s.display();

    cout<<"\nTop element is "<<s.topp()<<endl;

    return 0;

}
 

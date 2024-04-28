#include<iostream>



using namespace std;

struct Node
{
    int data;
    Node*next;
};

Node* rear=NULL;
Node* front=NULL;

class queue
{
    public:

        void enqueue(int data)
        {
            Node* temp=new Node();
            temp->data=data;
            temp->next=NULL;
            if(front==NULL && rear==NULL){
                front=rear=temp;
                return;
            }
            rear->next=temp;
            rear=temp;

        }

        void dequeue()
        {
            Node* temp=front;
            if(front==NULL)
            {
                cout<<"queue is empty\n";
            }
            else if(front==rear)
            {
                front=rear=NULL;
            }
            else
            {
                front=front->next;
                
            }
            free(temp);
        }
        
        int Front()
        {
            if(front==NULL)
            {
                cout<<"empty";
            }   return -1;
            return front->data;
        }

        void Print()
        {
            Node* temp=front;

            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<"\n";

        }
};

int main()
{

    queue q;
    q.enqueue(2);q.Print();
    q.enqueue(4);q.Print();
    q.enqueue(6);q.Print();
    q.enqueue(7);q.Print();
    q.dequeue();q.Print();
    q.enqueue(8);q.Print();
}
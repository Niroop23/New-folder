#include<iostream>
#include<string>

#define N 20
using namespace std;


int arr[N];
int front;
int rear;

void enqueue(int x);

int dequeue();

int Front();

void Print();

bool Isempty();

bool isfull();
 

bool Isempty()
{
    if(front==-1 && rear==-1)
    {
        return true;
    }
    return false;
}

bool isfull()
{
    return (rear+1)%N==front ?true:false;
}

void Print()
{
    int ct=(rear+N-front)%N+1;

    cout<<"queue :";
    for(int i=0;i<ct;i++)
    {
        int index=(front+i)%N;
        cout<<arr[index]<<" ";

    }
    cout<<"\n\n";
}

void enqueue(int x)
{
    cout<<"enqueuing \n";

    if((rear+1)%N==front)
    {
        cout<<"queue is full\n";

    }

    else if(Isempty())
    {   
        front=rear= 0; 
    }
    else{
        rear=(rear+1)%N;
    }
    arr[rear]=x;
}

int dequeue()
{
    cout<<"dequeuing \n";

    if(Isempty())
    {
        cout<<"queue is empty";
        return -1;
    }
    else if(front==rear)
    {
        int a=arr[front];
        front=rear=-1;
        return a;
    }

    else
    {
        int a=arr[front];
        front=(front+1)%N;
        return a;
    }
}
int Front()
{
    if(front==-1)
    {
        cout<<"empty queue\n";
        return -1;
    }
    return arr[front];
}


int main()
{
    front=-1;
    rear=-1;
    enqueue(2);Print();
    enqueue(4);Print();
    enqueue(6);Print();
    enqueue(27);Print();
    dequeue();Print();
    enqueue(8);Print();

    return 0;

}





#include<iostream>
using namespace std;


class twostack
{
    
    int *arr;
    int size;
    int top1,top2;



    public:
        twostack(int n)
        {
            this->size=n;
            arr=new int[n];
            top1=-1;
            top2=n;
        }


        void push1(int x)
        {
            if(top1<top2-1)
            {
                arr[++top1]=x;
            }
            else
            {
                cout<<"stack1 is full:overflow\n";
            }

        }
        void push2(int x)
        {
            if(top2>top1+1)
            {
                arr[--top2]=x;
            }
            else{
                cout<<"stack2 is full:overflow\n";
            }
        }

        void pop1()
        {
            if(top1==-1)
            {
                cout<<"stack1 is empty:underflow\n";
            }
            else
            {
                int pop1=arr[top1];
                cout<<"popped element from stack1 : "<<pop1<<"\n";
                top1--;
            }
        }
        void pop2()
        {
            if(top2==size-1)
            {
                cout<<"stack2 is empty:underflow\n";

            }
            else
            {
                int pop2=arr[top2];
                cout<<"popped element from stack2 : "<<pop2<<"\n";
                top2++;
            }
        }

        void display1()
        {
          
            if(top1==-1)
            {
                cout<<"stack1 is empty\n";
            }

            else
            {
                int i;
                for(i=top1;i>=0;--i)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
            }
        }

        void display2()
        {
            if(top2==size-1)
            {
                cout<<"stack2 is empty\n";
            }
            
            else
            {
                int i;
                for (i=top2;i<size;++i)
                {
                    cout<<arr[i]<<" ";
                    
                }
                cout<<"\n";
                
            }
        }

};


int main()
{
    int n=20;
    twostack s(n);
    

    for(int i=0;i<n/2;++i){
        int data;
        cout<<"enter data: \n";
        cin>>data;

        s.push1(data);
        cout<<"pushed value into stack 1 is: "<<data;
    }

    for(int i=n-1;i>=n/2;--i){
        int data;
        cout<<"enter data: \n";
        cin>>data;
        s.push2(data);
        cout<<"pushed data into stack 2 is :"<<data;
    }
   /* s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push1(4);
    s.push1(5);
    s.push1(6);
    s.push1(7);
    s.push1(8);
    s.push1(9);
    s.push1(10);
    s.push2(11);
    s.push2(12);
    s.push2(13);
    s.push2(14);
    s.push2(15);
    s.push2(16);
    s.push2(17);
    s.push2(18);
    s.push2(19);
    s.push2(20);*/


    s.display1();  
    s.display2(); 


    return 0;  



} 

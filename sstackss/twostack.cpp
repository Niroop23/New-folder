#include<iostream>
using namespace std;


class twostack
{
    private:
    int *arr;
    int size;
    int top1,top2;



    public:
        twostack()
        {
            size=0;
            arr=nullptr;
            top1=-1;
            top2=0;
        }

        ~twostack(){
            if(arr!=nullptr){
                delete[] arr;
            }
        }
        void initialize(int n)
        {
            if(n<=0)
            {
                cout<<"size invalid... \n"<<endl;
                return;
            }

            size=n;
            arr=new int[size];
            top2=size;
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
                top2--;
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
                    cout<<arr[top1];
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
                    cout<<arr[top2];
                    
                }
                cout<<"\n";
                
            }
        }

};


int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    twostack s;
    s.initialize(n);

    for(int i=0;i<n/2;++i){
        int data;
        cout<<"enter data";
        cin>>data;

        s.push1(data);
        cout<<"pushed value into stack 1 is: "<<data;
    }

    for(int i=n-1;i>=n/2;--i){
        int data;
        cout<<"enter data: ";
        cin>>data;
        s.push2(data);
        cout<<"pushed data into stack 2 is :"<<data;
    }
    s.display1();  
    s.display2(); 


    return 0;  



} 

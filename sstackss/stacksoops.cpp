#include <iostream>
#define max 101
using namespace std;

class stack
{
    private:
     int arr[max];
        int top;

    public:

        stack()
        {
            top=-1;
        }

        void push(int x) // adds user given element on the top of the stack
        {
            if(top==max-1)
            {
                cout<<"error:overflow\n";
                return;
                
            }
            arr[++top]=x;

        }

        void pop()    //demoves the last or latest inserted element from the stack
        {
            if(top==-1)
            {
                cout<<"error:underflow\n";
                return;
            }
            top--;
        }

        int Top()  //return the top-most element in the stack
        {
            return arr[top];
        }

        int isempty()  //checks if the func is empty or not
        {
            if(top==-1) return 1;
            return 0;
        }

        void print(){
            int i;
            cout<<"stack is: ";
            for(i=0;i<=top;i++)
            {
                cout<<arr[i]<<" "<<endl;
            }
            cout<<"\n";
        }
};

int main()
{
    stack s;

    s.push(1);s.print();
    s.push(2);s.print();
    s.push(3);s.print();
    s.push(4);s.print();
    s.push(9);s.print();
    s.pop();s.print();
    
}
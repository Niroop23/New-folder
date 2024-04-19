#include <iostream>
#include<stack>
using namespace std;

#define max 101
int A[max];
int top=-1;

void push(int x){
    if(top==max-1){

        int ch;
        cout<<"(1)bigger array?? or (2)leave";
        cin>> ch;
        switch(ch){
            
            case 1:
                int BA[2*max];
                for(int i=0;i<sizeof(A);i++){
                    BA[i]=A[i];

                }
                BA[++top]=x;
                
                

        }
        cout<<"sstack overflow\n"<<endl;
        return;
    }
    A[++top]=x;
    
}

void pop(){
    if(top==-1){
        cout<<"underflow\n"<<endl;
        return;
    }

    top--;
}

void print(){
    int i;
    cout<<"stack: ";
    for(i=0;i<=top;i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n";
}
int topp(){
    return A[top];
}
int main(){
    push(19);print();
    push(23);print();
    push(19);print();
    push(5);print();
    pop();print();
    push(23);print();
    


    
}
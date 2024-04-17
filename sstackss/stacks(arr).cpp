#include <iostream>
#include<stack>
using namespace std;

#define max 101
int A[max];
int top=-1;

void push(int x){
    if(top==max-1){
        cout<<"sstack overflow\n"<<endl;
        return;
    }
    A[++top]=x;
    
}

void pop(int x){
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
        cout<<A[i];
    }
    cout<<"\n";
}
int topp(){
    return A[top];
}
int main(){
    


    
}
#include<iostream>
#include<stack>

using namespace std;


void solve(stack<int>&inputStack,int Size,int ct){
    
    if(ct==Size/2){
        inputStack.pop();
        return;
    }
    int nu=inputStack.top();
    inputStack.pop();
    solve(inputStack,Size,ct+1);

    inputStack.push(nu);


}
void deleteMiddle(stack<int>&inputStack, int N){
    int ct=0;
    solve(inputStack,N,ct);

}
stack<int>inputStack;

int main()
{
    
    
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);
    deleteMiddle(inputStack,4);
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;
    return 0;

    
    


}
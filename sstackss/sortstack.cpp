#include<iostream>
#include<stack>
using namespace std;

stack<int>s;
void sort(stack<int>&s,int num)
{
    if(s.empty() || (!s.empty() && s.top()<num) )
    {
        s.push(num);

        return;
    }
    int n=s.top();
    s.pop();


    sort(s,num);
     
    s.push(n);
}

void ss(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }

    int num=s.top();
    s.pop();
    ss(s);

    sort(s,num);
}


int main()
{
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);

    ss(s);

    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;

    return 0;
}
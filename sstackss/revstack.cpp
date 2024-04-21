#include <iostream>
#include <stack>

using namespace std;


void insertbottom(stack<int> &s,int ele){

    if(s.empty()){

        s.push(ele);
        return;
    }

    int num=s.top();

    s.pop();

    insertbottom(s,ele);

    s.push(num);


}



void revstack(stack<int> &st){

    if(st.empty())
    {
        return;
    }

    int num=st.top();
    st.pop();
    revstack(st);
    insertbottom(st,num);


}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"original stack: ";

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
        
    }
    cout<<endl;

    return 0;

}
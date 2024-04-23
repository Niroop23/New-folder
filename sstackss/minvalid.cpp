#include<string>
#include<iostream>
#include<stack>

using namespace std;

int findmincost(string &s){
    if(s.length()%2==1){
        return -1;
    }

    stack<char>st;

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];

        if(ch=='{')
        {
            st.push(ch);
        }

        else
        {
            if(st.top()=='{'&& !st.empty())
            {
                st.pop();
            }

            else
            {
                st.push(ch);
            }

        }
            
        

    }
    int a=0,b=0;
    while(!st.empty()){
        if(st.top()=='{')
        {
            b++;
        }
        else{
            a++;
        }
        st.pop();
    }
    int ans=(b+1)/2 + (a+1)/2;

    return ans;




}

int main(){

    string s="{{}{}}";
    cout<<findmincost(s);
}
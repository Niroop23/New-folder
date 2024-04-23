#include <iostream>
#include <stack>

using namespace std;


bool red(string &s){
    
    stack<char> tmp;
    int i;
    for(i=0;i<s.length();i++)
    {
        char ch=s[i];

        if((ch=='(')||(ch=='+') || (ch=='-') || (ch=='*') || (ch=='/'))
        {
            tmp.push(ch);
        }
        else{
            if(ch==')'){
                bool flag=true;

                while(tmp.top()!='('){
                    char topp=tmp.top();
                    if(topp=='+' || topp=='-' || topp=='*'||topp=='/'){
                        flag=false;

                    }
                    tmp.pop();
                }

                if(flag==true){
                    return true;
                }
                tmp.pop();
            }
            

        }
    }
    return false;

}
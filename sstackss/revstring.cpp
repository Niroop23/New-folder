#include <iostream>
#include <stack>

using namespace std;

int main()
{

    string str="civic";

    stack<char> s;

    for(int i=0;i<str.length();i++){

        s.push(str[i]);

    }

    string ans=" ";

    while(!s.empty()){
        char ch=s.top();

        ans.push_back(ch);
        s.pop();



    }
    cout<<"ans is : "<<ans<<endl;


    return 0;
}
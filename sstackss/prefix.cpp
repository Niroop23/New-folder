#include <iostream>
#include<stack>
#include<string>
#include<math.h>

using namespace std;



bool isoperator(char c){
    if(c=='+' || c=='-' || c=='*' || c=='/'){
        return true;
    }
    else{
        return false;
    }
}

bool isdigit(char c){
    if(c>='0' && c<='9'){
        return true;
    }
    return false;
}

int operate(char operation,int op1,int op2){
    if(operation=='+') return op1+op2;

    else if(operation=='-') return op1-op2;

    else if(operation=='*') return op1*op2;

    else if (operation=='/') return op1/op2;

    else{
        cout<<"error\n";
    }
    return -1;

}

int evalprefix(string exp){
    stack<int>s;
    for(int i=exp.length()-1;i>=0;i--){
        if(exp[i]== ' ' || exp[i]==','){
            continue;

        }
        else if(isoperator(exp[i]))
        {
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();

            int res=operate(exp[i],op1,op2);
            s.push(res);
        }

        else if(isdigit(exp[i]))
        {
            string operandd="";
            while(i>=0 &&isdigit(exp[i]))
            {
                operandd=exp[i]+operandd;
                i--;
            }
            i++;
            int operand=stoi(operandd);

            s.push(operand);
        }


        }
        return s.top();
    }





int main(){
    string exp="+ 9 * 12 6";
    int ress=evalprefix(exp);

    cout<<"output = "<<ress<<"\n";

    return 0;

}
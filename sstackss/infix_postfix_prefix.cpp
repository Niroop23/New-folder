#include <stack>
#include<string>
#include <iostream>

using namespace std;



int evalpostfix(string exp);
int operate(char operation,int op1,int op2);
bool isoperator(char c);
bool isdigit(char c);

int evalpostfix(string exp)
{
    stack<int>s;

    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]==' ' || exp[i]==',')
        {
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
            int operand=0;
            
            while(i<exp.length() && isdigit(exp[i]) )
            {
                operand = (operand*10)+ (exp[i]-'0');

                i++;
            }
            i--;


            s.push(operand);
        }
    }
    return s.top();
}

int operate(char operation,int op1,int op2)
{
    if(operation=='+') return op2+op1;

    else if(operation=='-') return op2-op1;

    else if(operation=='*')  return op2*op1;

    else if(operation=='/') return op2/op1;


    else cout<<"error\n";
    
    return -1;    

}

bool isoperator(char c)
{
    if(c=='+'|| c=='-' || c=='*' || c=='/')
        return true;
    return false;
}

bool isdigit(char c)
{
    if(c>='0'&& c<='9')
        return true;
    return false;
}



int main()
{
    string exp="2,3,4,5,-,*,+";
    //cout<<"enter postfix exp\n";

    int res=evalpostfix(exp);

    cout<<"output = "<<res<<"\n";


}
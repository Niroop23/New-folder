#include <iostream>
#include <stack>
#include<vector>
using namespace std;


vector<int> monotonicinc(vector<int> &nums)
{
    int n=nums.size();

    vector<int>res;
    stack<int>s;
    for(int i=0;i<n;++i)
    {
        //while stack is not empty and top elemnt is greater than the current elemnt in the nums array
        while(!s.empty() && s.top()>nums[i])
        {
            //pop the top element from the stack
            s.pop();
        }

        //push the current element into the stack
        s.push(nums[i]);

    }
    //construct res array from stack
    while(!s.empty())
    {
        res.insert(res.begin(),s.top());
        s.pop();

    }
    return res;
}

int main()
{
    vector<int> nums ={3, 1, 4, 1, 5, 9, 2, 6};
    vector<int> res =monotonicinc(nums);
    cout<<"monotonic increasing stack :";
    for(int num :res)
    {
        cout<<num<<" ";

    }
    cout<<endl;

    return 0;
}


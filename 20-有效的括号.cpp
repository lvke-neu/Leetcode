#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    char temp;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
        else if(s[i]==')')
        {
            if(st.empty())
                return false;
            temp=st.top();
            st.pop();
            if(temp!='(')
                return false;
        }else if(s[i]=='}')
        {
            if(st.empty())
                return false;
            temp=st.top();
            st.pop();
            if(temp!='{')
                return false;
        }else
        {
            if(st.empty())
                return false;
            temp=st.top();
            st.pop();
            if(temp!='[')
                return false;
        }
    }
    if(st.empty())
        return true;
    return false;
}
int main()
{
    cout<<isValid("]")<<endl;
    return 0;
}

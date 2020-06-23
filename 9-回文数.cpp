#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool isPalindrome(int x)
{
    if(x<0)
        return 0;
    vector<int> v;
    while(x!=0)
    {
        v.push_back(x%10);
        x/=10;
    }
    bool flag=true;
    int i=0;
    int j=v.size()-1;
    while(i<j&&i!=j)
    {
        if(v[i]!=v[j])
        {
            flag=false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}
int main()
{
    cout<<isPalindrome(10)<<endl;
    return 0;
}

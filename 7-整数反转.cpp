#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//-2147483648 ~ 2147483647
int reverse(int x)
{
    vector<int> v;
    while(x!=0)
    {
        v.push_back(x%10);
        x/=10;
    }
    double sum=0;
    for(int i=0;i<v.size();i++)
        sum+=v[i]*pow(10,v.size()-i-1);
    if(sum>(pow(2,31)-1)||sum<(-pow(2,31)))
        return 0;
    else
        return (int)sum;
}
int main()
{
    cout<<reverse(2147483647)<<endl;;
    return 0;
}

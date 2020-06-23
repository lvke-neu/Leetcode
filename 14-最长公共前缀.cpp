#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
string longestCommonPrefix(vector<string>& strs)
{
    if(strs.size()==0)
        return "";
    int minlengthIndex=0;
    int minLength;
    int flag=1;
    for(int i=1;i<strs.size();i++)
        if(strs[i].size()<strs[minlengthIndex].size())
            minlengthIndex=i;
    minLength=strs[minlengthIndex].size();
    for(int i=0;i<strs.size();i++)
        if(strs[i].find(strs[minlengthIndex])!=0)
            flag=0;
    if(flag==1)
        return strs[minlengthIndex];


    for(int i=1;i<minLength;i++)
    {   flag=1;
        strs[minlengthIndex]=strs[minlengthIndex].erase(minLength-i);

        for(int j=0;j<strs.size();j++)
            if(strs[j].find(strs[minlengthIndex])!=0)
                {
                    flag=0;
                    break;
                }
        if(flag==1)
            return strs[minlengthIndex];


    }


    return "";
}

int main()
{
    vector<string> strs;
//    strs.push_back("flower");
//    strs.push_back("flow");
//    strs.push_back("flight");
    strs.push_back("dog");
    strs.push_back("aogggg");
    strs.push_back("cogggg");
    cout<<longestCommonPrefix(strs)<<endl;



    return 0;
}

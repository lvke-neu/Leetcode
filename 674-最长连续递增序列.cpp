#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
int findLengthOfLCIS(vector<int>& nums)
{
    vector<int> index;
    int maxLength;
    for(int i=1;i<nums.size();i++)//[1,3,5,4,2,3,4,5]
        if(nums[i]<=nums[i-1])
            index.push_back(i);
//    for(int i=0;i<index.size();i++)
//        cout<<index[i]<<"   ";
//    cout<<endl;

    if(index.size()==nums.size()-1)
        return 1;
    if(index.size()==0)
        return nums.size();
    maxLength=index[0];
    for(int i=1;i<index.size();i++)
        if(index[i]-index[i-1]>maxLength)
            maxLength=index[i]-index[i-1];
//    cout<<maxLength<<endl;
    if((nums.size()-index[index.size()-1])>maxLength)
        maxLength=nums.size()-index[index.size()-1];

    return maxLength;

}

int main()
{

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(8);
    nums.push_back(6);

    cout<<findLengthOfLCIS(nums)<<endl;
    return 0;
}

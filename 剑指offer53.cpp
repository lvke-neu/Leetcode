#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
int missingNumber(vector<int>& nums)
{
    int trueLength=nums.size()+1;
    int trueSum=0;
    int subSum=0;
    for(int i=0;i<trueLength;i++)
        trueSum+=i;
    for(int i=0;i<nums.size();i++)
        subSum+=nums[i];

    return trueSum-subSum;
}

int main()
{

    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(9);

    cout<<missingNumber(nums)<<endl;
    return 0;
}

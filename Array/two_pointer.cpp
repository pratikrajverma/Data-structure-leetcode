#include<iostream>
#include <vector>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v;
        int i=0;
        while(i<nums.size()-1)
        {
                for(int j=i+1; j<nums.size(); j++)
            {
                    if(nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
            i++;
        }
        return v;
    }

int main()
{
//enter your code
int target=6;
vector<int> nums;
nums.push_back(1);
nums.push_back(7);
nums.push_back(3);
nums.push_back(2);
nums.push_back(5);
nums=twoSum(nums,target);
for(int i=0; i<nums.size(); i++)
{
    cout<<nums[i];
}




return 0;
}
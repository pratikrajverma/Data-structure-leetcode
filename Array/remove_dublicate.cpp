#include<iostream>
#include <vector>
using namespace std;
 vector<int> twoSum(vector<int>& nums) 
    {
        
        int i=0;
        
                for(int j=i+1; j<nums.size(); j++)
            {
                    if(nums[i]==nums[j])
                {
                    nums[j]=99999;
                    

                }else{

                i=j;
                }
            }
            
        
        vector<int> v;
       
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=99999)            
            {
                v.push_back(nums[i]);
                
            }
        }
        return v;
    }

int main()
{
//enter your code


vector<int> nums;
nums.push_back(1);
nums.push_back(1);
nums.push_back(2);
nums.push_back(2);
nums.push_back(3);
nums.push_back(3);
nums.push_back(3);
nums.push_back(0);
nums.push_back(0);
nums.push_back(6);
nums=twoSum(nums);
for(int i=0; i<nums.size(); i++)
{
    cout<<nums[i];
}

cout<<endl;
cout<<nums.size();



return 0;
}
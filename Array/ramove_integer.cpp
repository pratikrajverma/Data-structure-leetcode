#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
       

        vector<int> v;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=val)
            {
                v.push_back(nums[i]);
            }
        }

        
         return v.size();
    }

int main()
{
//enter your code
int size;
vector<int> nums;
nums.push_back(0);
nums.push_back(1);
nums.push_back(2);
nums.push_back(5);
nums.push_back(3);
nums.push_back(0);
nums.push_back(4);
nums.push_back(9);
size=removeElement(nums,2);

cout<<size;




return 0;
}

    

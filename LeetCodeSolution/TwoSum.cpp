/*
Given an array of integers nums and an integer target,
 return indices of the two numbers such that they add 
 up to target.

You may assume that each input would have exactly one
 solution, and you may not use the same element twice.

You can return the answer in any order.
*/
//Title:- Two sum
//Code:- Pavan Chavan
//date:- 15-07-2021
//email:-pavan.21920161@viit.ac.in

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
    return result;    
    }
};
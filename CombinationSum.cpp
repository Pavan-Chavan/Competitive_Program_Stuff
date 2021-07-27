//Title:- combination sum
//Code:- Pavan Chavan
//date:- 27-07-2021
//email:-pavan.21920161@viit.ac.in

/*
Given an array of distinct integers candidates and a target integer target, return a list of all
 unique combinations of candidates where the chosen numbers sum to target. You may return the 
 combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two 
combinations are unique if the frequency of at least one of the chosen numbers is 
different.

It is guaranteed that the number of unique combinations that sum up to target is less 
than 150 combinations for the given input.
*/
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>result;
        helper(0,target,candidates,result,ds);
        return result;
    }
    void helper(int index,int target,vector<int>& candidates,vector<vector<int>>& result,vector<int>& ds)
    {
        if(index==candidates.size())
        {
            if(index==candidates.size())
            {
                if(target==0)
                {
                    result.push_back(ds);
                }
                return;
            }
        }
        if(target>=candidates[index])
        {
            ds.push_back(candidates[index]);
            helper(index,target-candidates[index],candidates,result,ds);
            ds.pop_back();
        }
        helper(index+1,target,candidates,result,ds);
    }
};
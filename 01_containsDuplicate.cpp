class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // brute force : nested for loop => tc : O(n^2)

        /*
        better approach

        sort(nums)
        for(i = 1 to n-1)
            if nums[i-1]==nums[i] return true
            else return false
        
        tc: O(nlogn + n) ~ O(nlogn)
        sc: O(1)
        */

        //optimal approach

        int n = nums.size();
        unordered_set<int> s;

        for(int i = 0; i<n; i++){
            s.insert(nums[i]);      //set contains only unique elements
        }                            // 1, 2, 3, 3 -> 1, 2, 3

        if(s.size()==n) return false;
        return true;

        // tc: O(n)
        // sc: O(n)
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute force: generate all pairs and check if there are any two pairs whose sum gives target
        // tc: O(n^2), sc: O(1)

        /*
        better approach

        sort(nums)
        int l = 0, r =nums.size()-1

        while(i<j){
            if(nums[i]+nums[j] == target) return {i, j}
            else if(nums[i]+nums[j] > target ) j--
            else i++
        }

        return {}

        tc: O(nlogn + n) ~ O(nlogn)
        sc: O(1)
        */

        //optimal approach

        int n = nums.size();
        unordered_map<int, int> m;     // {}

        for(int i = 0; i<n; i++){
            int r = target - nums[i];

            if(m.find(r)!=m.end()){
                return {m[r], i};
            }
            
            m.insert({nums[i], i});

        }
        return {};

        //tc: O(n)
        //sc: O(n)
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
         brute approach

         lf length(s) != length(t) return false

         sort(s)
         sort(t)

         if s == t then return true
         return false

         tc: O(nlogn + mlogm)
         sc: O(1)
        
        */

        //optimal approach

        int n = s.size(), m = t.size();
        if(n!=m) return false;

         //s and t consist only lowercase

         vector<int> hash(26, 0);

         for(int i = 0; i<n; i++){
            hash[s[i] - 'a' ]++;
            hash[t[i] - 'a' ]--;
         }

         for(int q: hash){
            if(q!=0) return false;
         }
         return true;

         //tc: O(n+m)
         //sc: O(26) ~ O(1)
    }
};

class Solution {
public:
        int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int l = 0;
        for(int num : set){
            if(!set.count(num - 1)){
                int ctr = 1;
                while(set.count(num+=1)){
                    ctr++;
                }
                l = max(l, ctr);
            }
        }
        return l;
    } 
    
};
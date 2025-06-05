class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> hash;
        int l = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(hash.count(nums[i])){
                return true;
            }

            hash.insert(nums[i]);

            if(hash.size() > k){
                hash.erase(nums[l]);
                l++;
            }
        }

        return false;
    }
};
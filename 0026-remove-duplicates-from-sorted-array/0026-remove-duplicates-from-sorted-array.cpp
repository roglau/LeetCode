class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> hash;
        int idx = 0;
        for(int i = 0 ; i< nums.size();i++){
            if(hash[nums[i]] != NULL) {
                continue;
            }
            else {
                hash[nums[i]] = 1;
                nums[idx] = nums[i];
                idx++;
            }
        }

        return idx;
    }
};
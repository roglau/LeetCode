class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;

        for(int n : nums){
            hash[n]++;
        }

        for(auto& i : hash){
            if(i.second == 1){
                return i.first;
            }
        }

        return 0;
    }
};
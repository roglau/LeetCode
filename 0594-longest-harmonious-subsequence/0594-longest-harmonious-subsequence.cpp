class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> hash;

        for(int n : nums){
            hash[n]++;
        }
        int len = 0;
        for(const auto pair: hash){
            if(hash.count(pair.first + 1)){
                len = max(hash[pair.first] + hash[pair.first + 1], len);
            }
        }  
        return len;
    }
};
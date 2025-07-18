class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;

        if(nums.size() < 4) return res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 3; i++){
            // if(i > 0 && nums[i] < nums[i - 1]) continue;
            for(int j = i + 1; j < nums.size() - 2; j++){
                // if(nums[i] == nums[j]) continue;
                int l = j + 1;
                int r = nums.size() - 1;

                while(l < r){
                    long long int sum = static_cast<long long int>(nums[i]) + static_cast<long long int>(nums[j]) + static_cast<long long int>(nums[l]) + static_cast<long long int>(nums[r]);
                    if(sum == target){
                        vector<int> arr = {nums[i], nums[j], nums[l], nums[r]};

                        if(find(res.begin(), res.end(), arr) == res.end())
                            res.push_back(arr);

                        cout << sum << " " << i << " " << j << " " << r << " " << l << endl;
                        l++;
                        
                    }else if(sum < target){
                        l++;
                    }else{
                        r--;
                    }
                }
            }
        }

        return res;
    }
};
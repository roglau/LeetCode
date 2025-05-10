class Solution{
    public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();

        while(l < r){
            int mid = ((l+r)/2);
            // cout << l << " <- -> " << r << " = " << mid << endl;

            if(target > nums[mid] && mid != l){
                l = mid;
            }else if(target < nums[mid] && mid != r){
                r = mid;
            }else if(target == nums[mid]){
                return mid;
            }else{
                return -1;
            }
        }

        return -1;
    }
};
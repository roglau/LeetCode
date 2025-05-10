class Solution{
    public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();

        while(l <= r){
            int mid = ((l+r)/2);
            // cout << l << " <- -> " << r << " = " << mid << endl;
            if(target == nums[mid]){
                return mid;
            }else if(target < nums[mid]){
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }

        return -1;
    }

};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, l = 0;
        double avg = INT_MIN;
        for(int i = 0; i < nums.size() ; i++){
            sum += nums[i];
            
            if(i >= k - 1){
                avg = max(avg, (double) sum / k);
                sum -= nums[l];
                l++;
            }
        }
        return avg;
    }
};
class Solution{
    public:
    int sum(vector<int>& piles, int k){
        int total = 0;
        for(int p : piles){
            total += (p + k - 1) / k;  
            // cout << total << endl;
        }

        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = -1;
        for(int p : piles){
            r = max(p, r);
        }
        int l = 1;
        int answer = r;
        // cout << r << endl;
        while(l <= r){
            int mid = (l+r)/2;
            // cout << l << " <- -> " << r << " = " << mid << " " << sum(piles, mid) << endl;
            if(h >= sum(piles, mid)){
                answer = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }

        return answer;
    }
};

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;

        while(true){

            int total = 0;
            while(n > 0){
                int digit = n % 10;   
                total += digit * digit;
                n /= 10;
            }

            if(set.find(total) != set.end()){
                return false;
            }

            set.insert(total);
            
            if(total == 1) return true;
            n = total;
        }

        return false;
    }
};

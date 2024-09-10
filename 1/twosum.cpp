#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> arrHash;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {
            int remainder = target - nums[i];   
            if(arrHash[remainder] != 0 && i != arrHash[remainder] - 1){
                result.push_back(i);
                result.push_back(arrHash[remainder] - 1);
                break;
            }
            
            arrHash[nums[i]] = i+1;


        }

        
        // for(int i = 0; i < nums.size(); i++){
        //     int remainder = target - nums[i];

            // if(arrHash[remainder] != 0 && i != arrHash[remainder] - 1){
            //     result.push_back(i);
            //     result.push_back(arrHash[remainder] - 1);
            //     break;
            // }


        // }

        return result;

    }

};

int main(){


    return 0;
}
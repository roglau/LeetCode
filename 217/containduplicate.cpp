#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // sort(nums.begin(),nums.end());
        // bool flag = false;
        // for(int i =0;i<nums.size()-1;i++){
        //     if(nums[i] == nums[i+1]) return true;
        // }
        // return flag;

        unordered_map<int,int> arrHash;

        for(int i = 0; i < nums.size(); i++) {
            if(arrHash[nums[i]] != 0) return true;

            arrHash[nums[i]] = i+1;
        }

        return false;
    }
};

int main(){
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 4}; // No duplicates
    vector<int> nums2 = {1, 2, 3, 1}; // Contains duplicates

    bool result1 = solution.containsDuplicate(nums1);
    bool result2 = solution.containsDuplicate(nums2);

    cout << "Test 1 - Contains duplicates: " << (result1 ? "Yes" : "No") << endl;
    cout << "Test 2 - Contains duplicates: " << (result2 ? "Yes" : "No") << endl;

    return 0;
}
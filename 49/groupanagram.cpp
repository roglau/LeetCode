#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        
        for(int i = 0; i < strs.size(); i++){
           string sortedStr = strs[i];
           sort(sortedStr.begin(), sortedStr.end());
           hash[sortedStr].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for (const auto& pair : hash) {
            res.push_back(pair.second);
        }

        return res;
    }

};

int main(){
    Solution solution;

    // Example test case
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    vector<vector<string>> result = solution.groupAnagrams(strs);

    // Print the result
    for (const auto& group : result) {
        cout << "[ ";
        for (const auto& str : group) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
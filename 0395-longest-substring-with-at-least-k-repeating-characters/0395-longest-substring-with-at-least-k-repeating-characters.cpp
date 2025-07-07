class Solution {
public:

    vector<string> split(string s,char c){
        vector<string> result;
        int start = 0, end;

        while((end = s.find(c, start)) !=  string::npos){
            // cout << s.substr(start, end-start) << endl;
            result.push_back(s.substr(start, end - start));
            start = end + 1;
        }

        result.push_back(s.substr(start));

        return result;
    }


    int longestSubstring(string s, int k) {
        int res = 0;
        unordered_map<char, int> hash;
        vector<string> temp;
        for(char c : s){
            hash[c]++;
        }

        for(auto& pair: hash){
            if(pair.second < k){
                temp = split(s, pair.first);
                int maxLen = 0;
                for(string str : temp){
                    maxLen = max(maxLen, longestSubstring(str, k));
                }
                return maxLen;
            }
        }

        return s.length();
    }
};
class Solution {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) return "";

        unordered_map<char, int> hash1, hash2;
        for (char c = 'A'; c <= 'Z'; c++) {
            hash1[c] = 0;
            hash2[c] = 0;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            hash1[c] = 0;
            hash2[c] = 0;
        }

        for (char c : t) {
            hash2[c]++;
        }

        int required = 0;
        for (auto it : hash2) {
            if (it.second > 0) required++;
        }

        int l = 0, r = 0;
        int formed = 0;
        int minLen = INT_MAX;
        int start = 0;

        while (r < s.length()) {
            char c = s[r];
            hash1[c]++;

            if (hash1[c] == hash2[c]) {
                formed++;
            }

            while (formed == required) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                char leftChar = s[l];
                if (hash1[leftChar] == hash2[leftChar]) {
                    formed--;
                }
                hash1[leftChar]--;
                l++;
            }

            r++;
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
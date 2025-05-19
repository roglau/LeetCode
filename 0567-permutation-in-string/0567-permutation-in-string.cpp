#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> hash1, hash2;

        for (char c = 'a'; c <= 'z'; ++c) {
            hash1[c] = 0;
            hash2[c] = 0;
        }

        for(int i = 0;i<s1.length();i++){
            hash1[s1[i]]++;
        }

        int l = 0;
        for(int r = 0; r<s2.length(); r++){
            hash2[s2[r]]++;

            if(r - l + 1 == s1.length()){
                if(hash1 == hash2) return true;

                hash2[s2[l]]--;
                l++;
            }
        }

        return false;
    }
};

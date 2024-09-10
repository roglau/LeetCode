#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
         bool isAnagram(string s, string t) {
            if(s.length() != t.length()) return false;

            // sort(s.begin(), s.end());
            // sort(t.begin(), t.end());
            

            // for(int i = 0; i < s.length(); i++){
            //     if(s[i] != t[i]) return false;
            // }
            
            unordered_map<char ,int> Shash;
            unordered_map<char ,int> Thash;

            for(int i = 0; i < s.length(); i++){
                Shash[s[i]]++;
                Thash[t[i]]++;
            }

            if (Shash.size() != Thash.size()) {
                return false;
            }

            for (const auto& pair : Shash) {
                auto it = Thash.find(pair.first);
                if (it == Thash.end() || it->second != pair.second) {
                    return false;
                }
            }

            return true;
    }
};

int main(){


    return 0;
}
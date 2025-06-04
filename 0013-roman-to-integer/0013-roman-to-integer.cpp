using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hash;
        hash.insert({'I', 1});
        hash.insert({'V', 5});
        hash.insert({'X', 10});
        hash.insert({'L', 50});
        hash.insert({'C', 100});
        hash.insert({'D', 500});
        hash.insert({'M', 1000});

        int res = 0;
        for(int i = 0 ; i < s.length() ; i++){
            int curr = hash[s[i]];
            int next = i + 1 < s.length() ? hash[s[i+1]] : 0;

            if(next > curr){
                res += next - curr;
                i++;
            }else{
                res += curr;
            }

        }

        return res;
    }
};

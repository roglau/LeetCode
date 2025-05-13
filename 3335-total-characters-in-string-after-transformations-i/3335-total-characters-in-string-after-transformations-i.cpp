class Solution {
public:
    const int MOD = 1e9 + 7;
    unordered_map<char, vector<int>> memo;
    int length(char c, int t) {
        if (t == 0) return 1;
        
        if (memo[c].size() <= t)
        memo[c].resize(t + 1, -1);

        if (memo[c][t] != -1)
            return memo[c][t];

        long long res;
        if (c == 'z') {
            res = (length('a', t - 1) + length('b', t - 1)) % MOD;
        } else {
            res = length(c + 1, t - 1);
        }    

        memo[c][t] = res % MOD;
        return memo[c][t];
    }    
    int lengthAfterTransformations(string s, int t) {
        long long total = 0;
        for (char c : s) {
            total = (total + length(c, t)) % MOD;
        }
        return total;
    }
};

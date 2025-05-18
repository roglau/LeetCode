class Solution{
    public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> hash;

        for (char c = 'A'; c <= 'Z'; ++c) {
            hash[c] = 0;
        }

        int l=0;
        int maxFreq = 0, len = 0;

        for(int i = 0; i<s.length(); i++){
            hash[s[i]]++;

            maxFreq = max(hash[s[i]], maxFreq);

            while(i - l + 1 - maxFreq > k){
                hash[s[l]]--;
                l++;
            }

            len = max(len, i - l + 1);
        }
        return len;
    }
};

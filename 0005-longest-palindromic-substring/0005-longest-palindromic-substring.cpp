class Solution{
    public:
    string isPalindrome(string s, int l, int r){
        while(l >= 0 && r < s.length() && s[l] == s[r]){
            l--;
            r++;
        }

        return s.substr(l + 1, r - l -1);
    }

    string longestPalindrome(string s) {
        string res = "";
        for(int i = 0 ; i < s.length() ; i++){
            string a = isPalindrome(s, i , i);
            string b = isPalindrome(s, i , i+1);

            if (a.length() > res.length()) res = a;
            if (b.length() > res.length()) res = b;
        }
        return res;
    }
};
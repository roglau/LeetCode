class Solution {
public:
        bool isPalindrome(string s) {
        int left = 0, right = s.size()-1;
        while(left < right){
            while(!isalnum(s[left])) left++;
            while(!isalnum(s[right])) right--;

            if(tolower(s[left]) != tolower(s[right])) return false;
            left++;
            right--;
        }

        return true;
    }
};
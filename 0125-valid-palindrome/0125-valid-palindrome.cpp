class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(),
        [](unsigned char c) {
            return !std::isalnum(c);
        }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string temp = s;
        reverse(s.begin(), s.end());

        // cout << temp << " " << s << endl;

        if(s==temp) return true;

        return false;
    }
};
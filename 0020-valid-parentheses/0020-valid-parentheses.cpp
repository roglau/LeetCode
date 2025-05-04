class Solution{
    public:
    bool isValid(string s) {
        unordered_map<char, char> map;
        map.insert({')', '('});
        map.insert({'}', '{'});
        map.insert({']', '['});

        stack<char> stk;
        for(int i=0;i<s.length();i++){
            auto it = map.find(s[i]);

            if(it == map.end()) stk.push(s[i]);
            else if( stk.empty() || it->second != stk.top()) return false;
            else stk.pop();
        }

        return stk.empty();
    }
};

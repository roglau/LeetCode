class Solution {
public:
    string longestNiceSubstring(string s) {
        string res = "";
        for(int i = 0 ; i< s.length(); i++){
            unordered_map<char, bool> map;
            for(int j = i ; j< s.length(); j++ ){
                char c = s[j];

                map[c] = true;
                bool isValid = true;
                
                for(const auto& pair: map){
                    if(islower(pair.first)){
                        if(!map[toupper(pair.first)]){
                            isValid = false;
                            break;
                        }
                    }else{
                        if(!map[tolower(pair.first)]){
                            isValid = false;
                            break;
                        }
                    }
                }

                if(isValid){
                    string substr = s.substr(i, j - i + 1);
                    res = substr.length() > res.length() ? substr : res;    
                }
            }
        }

        return res;
    }
};
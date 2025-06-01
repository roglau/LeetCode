class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> hash;
        for(int i = 0 ;i < messages.size(); i++){
            int wordCount = 1;
            for(int j = 0 ; j < messages[i].length(); j++){
                if(messages[i][j] == ' ') wordCount++;
            }
            if(hash[senders[i]] > 0) hash[senders[i]] += wordCount;
            else hash[senders[i]] = wordCount;
        }
        
        int max = 0;
        string res = "";
        for(string s : senders){
            if(hash[s] > max){
                max = hash[s];
                res = s;
            }else if(hash[s] == max){
                if(s > res){
                    res = s;
                }
            }
        }
        return res;
    }
};

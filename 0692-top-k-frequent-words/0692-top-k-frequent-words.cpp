class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> result;
        unordered_map<string, int> map;

        auto cmp = [](const pair<int,string> &a, const pair<int,string> &b){
            if(a.first == b.first){
                return a.second > b.second;
            }

            return a.first < b.first;
        };

        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);

        for(string s : words){
            map[s]++;
        }

        for(auto &pair : map){
            pq.push({pair.second, pair.first});
        }

        for(int i = 0; i< k ; i++){
            auto p = pq.top();
            string s = p.second;
            result.push_back(s);

            pq.pop();
        }
        

        return result;
    }
};
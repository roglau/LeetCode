class Solution{
    public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> list;
        
        for(int i = 0;i<position.size();i++) list.push_back({position[i], speed[i]});

        sort(list.begin(), list.end(), [](const pair<int, int> a, const pair<int, int> b){
            return a.first > b.first;
        });
        vector<double> t;
        
        for(int i =0;i<list.size();i++) t.push_back( (double) (target - list[i].first) / list[i].second);
        

        stack<double> stacks;
        int count = 0;
        for(double time : t){
            if(stacks.empty() || time > stacks.top()){

                count++;
                stacks.push(time);
            }
        }

        return count;
    }
};
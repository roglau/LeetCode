class Solution{
    public:
    int calc(vector<int> a){
        return pow(a[0] - 0 , 2) + pow(a[1] - 0 , 2);
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, less<>> pq;
        vector<vector<int>> res;
        for(int i = 0; i < points.size(); i++){
            int dist = calc(points[i]);

            pq.push({dist, points[i]});

            if(pq.size() > k) pq.pop();
        }

        while(pq.size() > 0){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};

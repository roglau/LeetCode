class Solution{
    public:
    int calc(vector<int> a){
        return a[0] * a[0] + a[1] * a[1];
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> pq;
        vector<vector<int>> res;
        for(int i = 0; i < points.size(); i++){
            int dist = calc(points[i]);

            pq.push({dist, i});

            if(pq.size() > k) pq.pop();
        }

        while(pq.size() > 0){
            res.push_back(points[pq.top().second]);
            pq.pop();
        }
        return res;
    }
};

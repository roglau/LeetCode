class Solution{
    public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int area = 0;
        // s.push(-1);
        for(int i = 0;i<heights.size();i++){
            // cout << "topidx : " << s.top() << " area : " << area << endl;
            while(!s.empty() && heights[i] <= heights[s.top()]){
                int h = heights[s.top()];
                s.pop();
                int w = s.empty() ? i : i - s.top() - 1;
                area = max(area, h*w);
            }

            s.push(i);
        }

        while(!s.empty()){
            // cout << "bwh : " << s.top() << endl;
            int h = heights[s.top()];
            s.pop();
            int w = s.empty() ? heights.size() : heights.size() - s.top() - 1;
            area = max(area, h*w);
        }

        return area;
    }

};

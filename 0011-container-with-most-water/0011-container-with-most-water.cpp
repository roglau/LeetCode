class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;

        int area = 0;
        while(l < r){
            int w = r-l;

            int h = min(height[l], height[r]);

            int a = h * w;
            area = max(a, area);

            if(height[l] < height[r]) l++;
            else r--;
        }

        return area;
    }

};
class Solution{
    public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res (temperatures.size(), 0);
        stack<int> s;
        for(int i = 0;i<temperatures.size(); i++){
            // cout << temperatures[i] << "tem" << endl;
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                // cout << "i : " << i  << " top: " << temperatures[s.top()] << " = " << s.top() << endl;
                res[s.top()] = i - s.top();
                s.pop();
            }

            s.push(i);
        }

        return res;
    }
};
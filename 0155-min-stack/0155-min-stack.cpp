class MinStack {
public:
    stack <pair<int, int>> minstack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minstack.empty())
            minstack.push({val, val});
        else minstack.push({val, min(minstack.top().second, val)});
    }
    
    void pop() {
        minstack.pop();
    }
    
    int top() {
        return minstack.top().first;
    }
    
    int getMin() {
        return minstack.top().second;
    }
};

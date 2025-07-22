class Solution {
public:
    int reverse(int x) {
        long long val = x;

        vector<int> arr;
        bool min = false;
        if(val < 0){
            min = true;
            val = -val;
        }

        while(val > 0){
            arr.push_back(val % 10);
            val /= 10;
        }

        long long int res = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            cout << arr[i] << " " << arr.size() - i << endl;
            cout << pow(10, arr.size() - 1 - i) << endl;
            res += arr[i] * ( pow(10, arr.size() - 1 - i));
            if(res > INT_MAX || res < INT_MIN) return 0;
            cout << " rEs " << res << endl;
        }

        cout << res;
        return min ? -res : res;
    }
};
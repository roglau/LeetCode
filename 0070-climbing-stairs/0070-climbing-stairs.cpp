class Solution {
    public:
    int climbStairs(int n) {
        vector<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        cout << arr[0] << " " << arr[1];
        if(n < 3) return arr[n - 1];

        for(int i = 2 ; i < n ; i++){
            cout << i << endl;
            cout << arr[1] << arr[0] << endl;
            arr.push_back(arr[i - 1] + arr[ i - 2]);
        }

        return arr[n - 1];
       
    }
};;
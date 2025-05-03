class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int x = 0,y = numbers.size()-1;
        while(x < y){
            if(numbers[x] + numbers[y] > target){
                y--;
            }else if(numbers[x] + numbers[y] == target){
                return {x+1, y+1};
            }else{
                x++;
            }
        }

        return {};
    }

};
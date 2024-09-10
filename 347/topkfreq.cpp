#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }

    priority_queue<pair<int, int>> pq;
    for (const auto& pair : freqMap) {
        pq.push({pair.second, pair.first});
    }

    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
}

int main() {
    // Test case 1: Basic case
    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    int k1 = 2;
    vector<int> result1 = topKFrequent(nums1, k1);
    cout << "Test Case 1: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 2: Multiple frequent elements
    vector<int> nums2 = {1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5};
    int k2 = 3;
    vector<int> result2 = topKFrequent(nums2, k2);
    cout << "Test Case 2: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 3: Edge case with k equal to the number of unique elements
    vector<int> nums3 = {1, 2, 3, 4};
    int k3 = 4;
    vector<int> result3 = topKFrequent(nums3, k3);
    cout << "Test Case 3: ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 4: Edge case with only one element
    vector<int> nums4 = {1};
    int k4 = 1;
    vector<int> result4 = topKFrequent(nums4, k4);
    cout << "Test Case 4: ";
    for (int num : result4) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 5: All elements have the same frequency
    vector<int> nums5 = {1, 2, 3, 4, 5, 6};
    int k5 = 3;
    vector<int> result5 = topKFrequent(nums5, k5);
    cout << "Test Case 5: ";
    for (int num : result5) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

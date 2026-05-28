#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to check if any two numbers sum up to target (variant 1)
    string twoSumExists(vector<int>& arr, int target) {
        int n = arr.size();
        // Outer loop picks one element at a time
        for (int i = 0; i < n; i++) {
            // Inner loop searches for another element that complements arr[i]
            for (int j = i + 1; j < n; j++) {
                // If sum equals target, return "YES"
                if (arr[i] + arr[j] == target) {
                    return "YES";
                }
            }
        }
        // No pair found that sums to target
        return "NO";
    }
};

class Solution2 {
public:
    // Variant 1: Check if two numbers sum to target using hashing
    string hashedSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp;  // Map to store element -> index
        int n = arr.size();
        // Iterate over all elements
        for (int i = 0; i < n; i++) {
            int complement = target - arr[i];  // Needed value to reach target sum
            // Check if complement is already in map
            if (mp.find(complement) != mp.end()) {
                return "YES";  // Pair found
            }
            // Store current element with its index for future reference
            mp[arr[i]] = i;
        }
        // No pair found
        return "NO";
    };
};

int main() {
    Solution2 sol;

    vector<int> arr = {1, 6, 5, 18, 11};
    int target = 14;

    // Variant 1
    cout << sol.hashedSum(arr, target) << "\n";
    
    return 0;
}
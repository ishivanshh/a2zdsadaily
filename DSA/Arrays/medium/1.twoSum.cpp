#include <iostream>
#include <vector>
using namespace std;

// first approch => traversal of array or try all posisible combination if i + j = sum. 
// Time complexity => o(n*n) & space complexity => o(1)

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
// second approch => using map function to store the array element , with index calculate the number needed while substracting target - current elemenet if present in map then okay
// time complexoty => o(n) space complexity => 0(logn)

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
// third approch => 2 pointer approch , store the element in the vector with value , index then sort it after take first pointer left on starting index and right pointer at the last element, move untill left crosses right then check if sum of them is equal to required then return , if not but sum is greater then move right -- or if sum is smaller than then move left ++;  nothing got return simply no

// time complexity => 0(n) spaace complexity 0(1)

class Solution3 {
    public : 
    string pointerSum(vector<int> arr, int target) {
        int n = arr.size();
        // Create a vector of pairs to remember original indices after sorting
        vector<pair<int, int>> numsWithIndex;
        for (int i = 0; i < n; i++) {
            numsWithIndex.push_back({arr[i], i});
        }
        // Sort based on the element values
        sort(numsWithIndex.begin(), numsWithIndex.end());

        int left = 0, right = n - 1;
        // Loop until pointers cross
        while (left < right) {
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;
            if (sum == target) {
                return "YES";  // Pair found
            } else if (sum < target) {
                left++;  // Need bigger sum, move left pointer right
            } else {
                right--; // Need smaller sum, move right pointer left
            }
        }
        return "NO";  // No pair found
    }
};
 
int main() {
    Solution2 sol;

    vector<int> arr = {1, 6, 5, 18, 12};
    int target = 11;

    // Variant 1
    cout << sol.hashedSum(arr, target) << "\n";
    
    return 0;
}
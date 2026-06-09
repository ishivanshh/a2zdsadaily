#include <iostream>
#include <vector>
#include<set>
#include <unordered_map>

using namespace std;

// length of longest subarray with sum equals to zero 

class Solution {
    public :
    vector<vector<int>>lengthSumZero(vector<int>&arr , int target){
        
    }
}


int main() {
    // Input array
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    // Target sum

    // Create object
    Solution obj;
    // Get all quadruplets
    vector<vector<int>> ans = obj.lengthSumZero(arr);

    // Print result
    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
    return 0;
}
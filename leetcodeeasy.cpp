#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Input array
    vector<int> arr = {3, 1, 2, 4};

    // Target sum
    int k = 6;

    // Create Solution object
    Solution sol;

    // Call function and store result
    int result = sol.subarraySum(arr, k);

    // Print the count of subarrays
    cout << "The number of subarrays is: " << result << "\n";

    return 0;
}




// 1. Compute current prefix sum.
// 2. Ask:
//    "Have I seen prefixSum - k before?"
// 3. If yes, every occurrence gives one valid subarray.
// 4. Add those occurrences to count.
// 5. Store the current prefix sum in the map.
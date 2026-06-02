#include <iostream>
#include <map>
#include <vector>
#include <unordered_set>
    
using namespace std;


// longest consectuive sequence

class Solution {
    public :
    int ls(vector <int>& arr, int x){
        for (int i = 0; i < arr.size();i++){
            if (arr[i] == x){
                return true;
            }
        }
        return false;
    };
    int longestSequence(vector <int>& nums){
        int n = nums.size();
        int longest = 1;
        for (int i = 0; i <n;i++){
            int x = nums[i];
            int count = 1;

            while (ls(nums, x+1) == true){
                x = x + 1;
                count++;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};

// second approch 

class Solution1 {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        // Return 0 if array is empty
        if (n == 0) return 0; 

        sort(nums.begin(), nums.end()); 

        // Track last smaller element
        int lastSmaller = INT_MIN; 
        // Count current sequence length
        int cnt = 0; 
        // Track longest sequence length
        int longest = 1; 

        for (int i = 0; i < n; i++) {
            // If consecutive number exists
            if (nums[i] - 1 == lastSmaller) {
                // Increment sequence count
                cnt += 1; 
                // Update last smaller element
                lastSmaller = nums[i]; 
            } 
            // If consecutive number doesn't exits
            else if (nums[i] != lastSmaller) {
                // Reset count for new sequence
                cnt = 1; 
                // Update last smaller element
                lastSmaller = nums[i]; 
            }
            // Update longest if needed
            longest = max(longest, cnt); 
        }
        return longest;
    }
};

// third approch 



int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2, 5, 101}; 

    // Create an instance of solution class
    Solution1 solution; 
    // Function call for finding longest consecutive sequence
    int ans = solution.longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

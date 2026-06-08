#include <iostream>
#include <map>
#include<set>
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
        for (int i = 0; i < n ; i++){
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

class Solution {
    public :
    int longestConsecutiveSeqSet(vector<int>&nums){
        int n = nums.size();

        unordered_set<int>st;
        for (int i = 0; i < n ; i++){
            st.insert(nums[i]);
        }

        int count = 0;
        int longest = 1;

        for (auto it : st) {
            // search it -1 exist in set if not found then that will starting seq number 
            if (st.find(it - 1) == st.end()) {
                // Initialize the count of the current sequence
                int cnt = 1; 
                // Starting element of the sequence
                int x = it;
                // works untill we will got x+1 term in set when we stop getting x+1 terms in set it will stop. 
                while (st.find(x + 1) != st.end()) {
                    // Move to the next element in the sequence
                    x = x + 1; 
                    // Increment the count of the sequence
                    cnt = cnt + 1; 
                }
                // Update the longest sequence length
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};
int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2, 5, 101}; 

    // Create an instance of solution class
    Solution1 solution; 
    // Function call for finding longest consecutive sequence
    int ans = solution.longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

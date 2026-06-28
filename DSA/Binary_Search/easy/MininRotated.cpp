#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public :
    int findMin(vector<int>nums ){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = ( low + high ) / 2;

            // checking for left half to be sorted
            if(nums[low] <= nums[mid]){
                ans = min(nums[low] , ans);
                low = mid +1;
            } else {
                ans = min(nums[mid] , ans);
                high = mid - 1;
            }
        }
        return ans;
    }
};


int main() {

    // Input array
    vector<int> nums = {4, 5, 6, 7, 1, 2};

    // Create object of Solution
    Solution sol;

    // Call function and store result
    int result = sol.findMin(nums);

    // Output the result
    cout << "Minimum element is " << result << endl;

    return 0;
}
#include <iostream>
#include <map>
#include <vector>
    
using namespace std;

// leaders in the array are the elements which are greater than all the elements to their right side.

class Solution {
public:
    //Function to find leaders in an array.
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;

        // Iterate through each element in nums
        for (int i = 0; i < nums.size(); i++) {
            bool leader = true;

            /* Check whether nums[i] is greater
            than all elements to its right*/
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] >= nums[i]) {
                    /* If any element to the right is greater 
                    or equal, nums[i] is not a leader*/
                    leader = false;
                    break;
                }
            }
            // If nums[i] is a leader, add it to the ans vector
            if (leader) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};


// second approch 

class Solution1 {
    public:
    vector <int> leader1(vector<int> arr){
        int n = arr.size();
        int max_from_right = INT_MIN;
        vector <int> ans;
        for(int i = n-1; i >= 0; i--){
            if (arr[i] > max_from_right){
                max_from_right = arr[i];
                ans.push_back(max_from_right);
            };
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {10,22,12,3,0,6};
    Solution1 finder;
    vector<int> ans = finder.leader1(nums);
    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

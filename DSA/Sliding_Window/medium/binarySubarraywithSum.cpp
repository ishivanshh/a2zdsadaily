#include<iostream>
#include<vector>

using namespace std;
class Solution {
    public :
    int numSubarraysWithSum(vector<int>nums , int goal){
        int n = nums.size();
        int count = 0;
        for (int start = 0; start < n; start++)
        {
            int sum = 0;
            for (int end = start; end < n; end++)
            {
                sum += nums[end];

                if(sum == goal){
                    count ++;
                }
            }   
        }
        return count;
    }
};


int main() {
    Solution obj;
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    // Output : 4
    cout << obj.numSubarraysWithSum(nums, goal) << endl; 
    return 0;
}
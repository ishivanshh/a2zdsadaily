#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public :
    int numberOfSubarrays(vector<int>nums , int k){
        int n = nums.size();
        int count = 0;
        for(int start = 0; start < n; start++){
            int oddCount = 0;
            for(int end = start ; end < n; end++){
                if(nums[end] % 2 != 0)
                oddCount++;

                if(oddCount > k) break;

                if(oddCount == k)
                count ++;
            }
        }
        return count;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 1, 1};
    int k = 3;
    cout << sol.numberOfSubarrays(nums, k) << endl;
    return 0;
}
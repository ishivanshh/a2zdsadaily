#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public :
    int longestOnes(vector<int>nums , int k){
        int n = nums.size();

        int maxlen = 0;

        for(int i = 0; i < n; i++){
            int zeros = 0;

            for(int j = i ; j < n; j++){
                if(nums[i] == 0){
                    zeros++;
                }
                if(zeros > k){
                    break;
                }
            }
        }
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    // Output the result
    cout << sol.longestOnes(nums, k) << endl;
    return 0;
}
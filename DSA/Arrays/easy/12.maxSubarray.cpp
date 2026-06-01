#include <iostream>
#include <vector>
using namespace std;


// maximum subaaray with sum = k
// First approch using calculating all possible subarrays
// TC => 0(N*N*N)
// SC => O(1)

class Solution {
    public : 
    int longestSubbarray(vector<int>& arr , int k){
        int n = arr.size();

        int maxLength = 0;

        for (int startIndex = 0; startIndex < n ; startIndex ++){
            for (int endIndex = startIndex; endIndex < n; endIndex++){

                int currentSum = 0;

                for (int i = startIndex ; i <= endIndex; i ++){
                    currentSum += arr[i];
                }
                if (currentSum == k)
                maxLength = max(maxLength, endIndex - startIndex + 1);
            }
        }
        return maxLength;
    }
};


// second approch using two pointer where keeping left pointer at the start and right pointer at the start and keep on adding the right pointer value to sum and if sum is greater than k then keep on removing the left pointer value from sum and move left pointer to the right until sum is less than or equal to k and if sum is equal to k then update the max length of subarray
// TC => O(N)
// SC => O(1)

class Solution {
    public : 
    int pointerSubarray(vector <int>& arr ,int k){
        int n = arr.size();

        int left = 0;
        int right = 0;

        int sum = arr[0];

        int maxLength = 0;

        while (right < n){
            while (left <= right && sum > k){
                sum = sum - arr[left];
                left ++;
            }

            if (sum == k){
                maxLength = max(maxLength, right - left + 1);
            }

            right ++;
            if (right < n) sum = sum + arr[right];
        }
        return maxLength;
    }
};

int main() {
    vector<int> arr = {10, 5 , 2, 7, 1 ,9};

    int k = 15;

    Solution obj;

    int ans = obj.pointerSubarray(arr, k);

    cout << "Longest Subarray is : " << ans << endl;

    return 0;
}
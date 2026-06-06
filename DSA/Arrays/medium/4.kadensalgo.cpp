#include <iostream>
#include <map>
#include <vector>
using namespace std;


class Solution {
    public : 
    int maxSubArray(vector <int>& arr){
        int n = arr.size();

        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                
                // Variable to store the sum of the current subarray
                int sum = 0; 

                // Calculate the sum of subarray nums[i...j]
                for (int k = i; k <= j; k++) {
                    sum += arr[k];
                }

                /* Update maxi with the maximum of its current 
                value and the sum of the current subarray*/
                maxi = max(maxi, sum);
                
            }
        }
    }
};

// second approch => to optimize the time complexity we can store sun before second loop 

class Solution2{
    public : 
    int maxSubArray1(vector <int>& arr){
        int n = arr.size();

        int maxi = INT_MIN;

        for (int i = 0; i < n ; i++){
            int sum = 0;
            for (int j = i ; j < n; j++){ 
                sum += arr[j];
                maxi = max(sum , maxi);
            }
        }
        return maxi;
    }
};

// third apporch => using kadane's algorithm
// time complexity => o(n) space complexity => o(1)
// take two variable sum , maxi , iterate over the array with i , and sum =+ arr[i] go with every element in one go if the sum < 0 then re-iniliaze sum = 0, but if sum > maxi store that in maxi and return it...

class Solution3 {
    public : 
    int maximumSubwithKadens(vector <int>& arr){
        int sum = 0;
        int maxi = INT_MIN;
        int n = arr.size();

        for(int i = 0; i < n ; i++){
            sum = sum + arr[i];

            if (sum > maxi){
                maxi = sum;
            }

            if (sum < 0){
                sum = 0;
            }
        };
        return maxi;
    }
};
// printing subarray which has maximum sum 
class solution {
    public : 

int subrrayWithMaxSum(vector<int>& nums) {
        
        // maximum sum
        long long maxi = LLONG_MIN; 
        
        // current sum of subarray
        long long sum = 0;
        
        // starting index of current subarray
        int start = 0; 
        
        // indices of the maximum sum subarray
        int ansStart = -1, ansEnd = -1; 
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            
            // update starting index if sum is reset
            if (sum == 0) {
                start = i;
            }
            
            // add current element to the sum
            sum += nums[i]; 
            
            /* Update maxi and subarray indice
            s if current sum is greater*/
            if (sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            
            // Reset sum to 0 if it becomes negative
            if (sum < 0) {
                sum = 0;
            }
        }
        
        // Printing the subarray
        cout << "The subarray is: [";
        for (int i = ansStart; i <= ansEnd; i++) {
            cout << nums[i] << " ";
        }
        cout << "]" << endl;
        
        // Return the maximum subarray sum found
        return maxi;
    };
};

int main() {
    vector<int> arr = {-1, -3, -7, -2, -10, -4};
    
    //create an instance of Solution class
    Solution3 sol;
    
    int maxSum = sol.maximumSubwithKadens(arr);
    
    //Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

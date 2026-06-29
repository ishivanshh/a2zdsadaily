

#include<iostream>
#include<vector>
using namespace std;

// find the single element in the array using binary search

class Solution {
    public :
    int singleNonDuplicate(vector<int>arr){
        int n = arr.size();
        // edge cases for first and last element in the array

        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];

        int low = 1;
        int high = n-2;
        int ans = -1;
        while (low <= high){
            int mid = (low + high) / 2;

            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
                ans = arr[mid];
            }
            // left half elimation....
             if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) ||
            (mid % 2 == 0 && arr[mid] == arr[mid + 1])){
                low = mid + 1;
            } // right half eliminated...  
            else high = mid - 1;
        }
        return ans;
    }
};


int main() {
    // Input array with all elements appearing twice except one
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};

    // Call the function and store the result
    Solution obj;
    
    int ans = obj.singleNonDuplicate(arr);

    // Print the result
    cout << "The single element is: " << ans << "\n";

    return 0;
}
#include<iostream>

using namespace std;

// Function to rotate the array to the left by one position
// taking temp as temporary array store elements of the array from index 1 to n-1 and index 0 element is stored at the end of the temp

// first approch using an extra array TC:- O(n) and SC:- O(n)
void solve(int arr[], int n) {
    int temp[n]; 
 
    // Shift the elements to the left by one position
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];  // The first element moves to the last position

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;
}

// second approch using just a single storing array TC:- O(n) and SC:- O(1)
// here we are storing only first element in the temp array and changing the elements in the original array to left to reduce space complexity 

void rotateArrayByOne(vector<int>& nums) {
        // Store the first element in a temporary variable
        int temp = nums[0];
        
        // Shift elements to the left
        for (int i = 1; i < nums.size(); ++i) {
            nums[i - 1] = nums[i];
        }

        // Place the first element at the end
        nums[nums.size() - 1] = temp;
    }


int main() {
    int n = 5;  // Size of the array
    int arr[] = {1, 2, 3, 4, 5};  // Original array

    solve(arr, n);  // Call the solve function to rotate and print the result

    return 0;
}
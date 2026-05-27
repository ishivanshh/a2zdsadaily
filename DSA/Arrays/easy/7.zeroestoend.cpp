#include <iostream>
using namespace std;
// function to move all zeroes to the end of the array

// first approch -> take temp array of size n store all non zero elements in it and them copy them back to original array and fill remaining places with 0 TC:- O(n) and SC:- O(n)
void zeroesToEnd(int arr[], int n){
    int temp[n];
    int j = 0;
    // Store non-zero elements
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            temp[j] = arr[i];
            j++;
        }
    }
    // Copy non-zero elements back
    for(int i = 0; i < j; i++){
        arr[i] = temp[i];
    }

    // Fill remaining places with 0
    for(int i = j; i < n; i++){
        arr[i] = 0;
    }

    cout << "Array after moving zeroes to end: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}


// seconf approch -> using two pointer TC:- O(n) and SC:- O(1)
// firstly set pointer j to first zero element then then i to next element to j if you find non zero elements while moving j then swap with j and move j to next zero element and repeat the process until i reaches end of array
void moveZeroes(vector<int>& nums) {
        // Pointer to the first zero
        int j = -1;

        // Find the first zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero found, return
        if (j == -1) return;

        // Start from the next index of first zero
        for (int i = j + 1; i < nums.size(); i++) {
            // If current element is non-zero
            if (nums[i] != 0) {
                // Swap with nums[j]
                swap(nums[i], nums[j]);
                // Move j to next zero
                j++;
            }
        }
    }
int main(){

    int arr[] = {1,0,2,3,4,0,0,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    zeroesToEnd(arr, n);

    return 0;
}
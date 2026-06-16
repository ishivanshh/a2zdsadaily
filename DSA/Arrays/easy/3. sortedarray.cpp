#include <iostream>

using namespace std;

// check for sorted array , simple approch compare each element to next ekement if any element is greater than next element then return false otherwise return true at the end of loop TC:- O(n) and SC:- O(1)

bool checkSorted(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            return false;
        }
    }
    return true;
}

// check for sorted array with rotate array 

bool check(vector<int>& nums) {
        int n = nums.size();
        int counter = 0;
        for(int i =0;i<n;i++){
            //This is used to compare the last element with the first element.
            
            if(nums[i]>nums[(i+1) % n]){
                counter ++;
            } 
        }
    return counter <= 1;
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(checkSorted(arr, n)){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }
    return 0;
}

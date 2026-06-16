#include <iostream>

using namespace std;
// left rotate an array by k steps 

// firslt do {k = k % n} in case k is greater than n , store first k elements in a temp array shift remaining elements to the left and then put back temp array elements to the end of the original array

// time complexity O(n) and space complexity O(k)

int leftRotate(int arr[] , int n, int k){
    int temp[k];
    // stored the first k elements in a temporary array
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }
    // shift the remaining elements to the left
    for(int i = k ; i < n; i++){
        arr[i-k] = arr[i];
    }
    // copy the elements from the temporary array to the end of the original array
    for(int i = 0; i < k; i++){
        arr[n-k+i] = temp[i];
    }
    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";  
    }
    cout << endl;
}

// second approch using reversal algorithm TC:- O(n) and SC:- O(1)
// for left rotation always reverse the first k elements, then reverse the remaining n-k elements and finally reverse the whole array
// for right rotation always reverse the last k elements, then reverse the remaining n-k elements and finally reverse the whole array
// use reverse function to reverse the elements in the array only in c++ 
int main(){
    int k ; 
    cin >> k;
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    k = k % n; // in case k is greater than n
    leftRotate(arr, n, k);
}
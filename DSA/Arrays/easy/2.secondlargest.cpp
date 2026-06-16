#include <iostream>
#include <vector>

using namespace std;

// first approch -> sort the array and print the second last element 0(NlogN)

int secondLargestWithSorting(vector<int>& arr , int n){
    sort(arr.begin() , arr.end());

    return arr[arr.size() - 2];
};


// second approch -> assume 2 variable(largest , secLargest) compare each element of array with largest element if found greater update that to largest and the largest element goes to seclargest also check if largest = seclargest wont be same element time complexity =>  0(N)

int secondLargestNumber(int arr[], int n){
    int secLargest = INT_MIN;
    int largest = INT_MIN;
    if(n<2) return -1;       
    // if there is only one element then return -1
    for(int i = 0; i < n ; i++){
        if(arr[i] > largest){       
            secLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secLargest && arr[i] != largest){
            secLargest = arr[i];
        }
    }
    if(secLargest == INT_MIN) return -1;
    return secLargest;
}

int main() {
    int arr[6];
    // Input
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    cout << secondLargestNumber(arr , 6) << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

// first approch -> sort the array and print the second last element 0(NlogN)
// second approch -> assume 2 variable compare each element of array with largest element if found greater update that to largest and the largest element goes to seclargest also check if largest = seclargest wont be same element. 0(N)

int secondLargestNumber(int arr[], int n){
    int secLargest = INT_MIN;
    int largest = INT_MIN;
    if(n<2) return -1;       
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

#include <iostream>
#include <vector>

using namespace std;


// 1 => largest number in the array
// first approch -> sort the array and return the last element 0(Nlogn)
// second approch -> compare each element to next element and update if you found greater than that. O(N);


int largestNumber(int arr[], int n){
     int max = arr[0];
     for(int i = 1; i < n; i++){
         if(arr[i] > max){
             max = arr[i];
         }
     }
     return max;
}

int main() {
    int arr[6];
    // Input
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    cout << largestNumber(arr , 6) << endl;
    return 0;
}

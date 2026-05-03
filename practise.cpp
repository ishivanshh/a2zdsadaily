#include<iostream>
using namespace std;

// largest number in an array 
// time complexity is O(n) and space complexity is O(1)
int largest(int n , int arr[]){
    int maxi = INT_MIN;
    for(int i =0; i < n; i++){
        if(arr[i]> maxi){
            maxi = max(arr[i], maxi);
        }
    }
    return maxi;
}

// find second largest number in an array

int secLargest(int n , int arr[]){
   int large = INT_MIN;
   int second_large = INT_MIN;
   int small = INT_MAX;
   int second_small = INT_MAX;

   for (int i = 0; i < n; i++) {
    // Update the largest and second largest values
    if (arr[i] > large) {
        second_large = large;
        large = arr[i];
    }
    else if (arr[i] > second_large && arr[i] != large) {
        second_large = arr[i];
    }
}
    for(int i = 0;i <n;i++){
        if(arr[i] < small){
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
    }   
}
//return second_large;
return second_small;
}
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int secLargest(int n, int arr[]);
    cout << secLargest(n, arr);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// first approch is to linear search for missing number in array 
// 
int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;
    // Iterate from 1 to n and check
    // if the current number is present
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        // If the current number is not present
        if (!found)
            return i;
    }
    return -1;
}
// second approch is to use hash table => o(n) + o(n)
// space complexity is o(n)

int missingHash(vector <int>& arr){
    int n = arr.size() + 1;

    vector<int> hash(n + 1, 0);

    for (int i = 0; i < arr.size(); i++){
        hash[arr[i]] = 1;
    }
    
    for (int i = 1; i <= n; i++){
        if (hash[i] == 0){
            return i;
        }
    }
    return -1;
}
// third approch => using sum formula to find the sum of first n natural numbers and then subtract the sum of the array from it to find the missing number
// time complexity is o(n) and space complexity is o(1)
int missingSum(vector <int>&arr, int n){
    int sum = (n * (n + 1)) / 2;
    int sumofN = 0;

    for (int i = 0; i < arr.size(); i++){
        sumofN = arr[i] + sumofN;
    }
        sum = sum - sumofN;
    return sum;
}
// forth approch => using XOR operator to find the missing number
// time complexity is o(n) and space complexity is o(1)


int usingXOR(vector <int>&arr , int n){
    int xor1 = 0;
    int xor2 = 0;

    for(int i = 1; i <= n; i++){
        xor1 = xor1 ^ i;
    }
    for (int i = 0; i < arr.size(); i++){
        xor2 = xor2 ^ arr[i];
    }
    return xor1 ^ xor2;
}

int main(){

    vector<int> arr = {1,2,4,5};

    cout << usingXOR(arr, 5) << endl;

    return 0;
}
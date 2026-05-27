#include <iostream>
#include <vector>
using namespace std;

// maximum consecutive ones

int missingHash(vector <int>& arr){
    int n = arr.size() + 1;

    int hash[n + 1] = {0};

    for (int i = 0 ;  i< n;i++){
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++){
        if (hash[i] == 0){
            return i;
        }
    }
    return -1;
}

int missingSum(vector <int>&arr, int n){
    int n = arr.size()+1;

    int sum = (n * (n + 1)) / 2;
    int sumofN = 0;

    for (int i = 0; i < arr.size(); i++){
        sumofN = arr[i] + sumofN;
    }
        sum = sum - sumofN;
    return sum;
}
int main(){

    vector<int> arr = {1,2,4,5};

    cout << missingSum(arr);

    return 0;
}
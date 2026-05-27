#include <iostream>
#include <vector>
using namespace std;
// first approch is to linear search for mis
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

int main(){

    vector<int> arr = {1,2,4,5};

    cout << missingHash(arr);

    return 0;
}
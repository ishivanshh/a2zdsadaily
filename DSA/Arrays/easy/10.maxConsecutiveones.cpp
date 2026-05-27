#include <iostream>
#include <vector>
using namespace std;

// maximum consecutive ones

int maxConsecutiveOnes(vector <int> &arr) {
   int count = 0;
   int n = arr.size();
   int maxCount = 0;
   for (int i = 0; i < n; i++){
    if (arr[i] == 1){
        count ++;
        maxCount = max(maxCount, count);
    } else {
        count = 0;
    }
   }
   return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1}; 
    cout << maxConsecutiveOnes(arr) << endl; 
    return 0;
}
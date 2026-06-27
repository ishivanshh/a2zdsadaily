#include <iostream>
#include <map>
#include <vector>

// reaarange the array in sign sequence 
// time complexity : 0(n) + 0(n)
// space complexity : 0(n)
 
using namespace std;
class Solution {
    public : 
    int rearrange(vector <int>& arr){
        int n = arr.size();
        vector<int> negTemp;
        vector<int> posTemp;
        for (int i = 0; i < n ; i++){
            if (arr[i] < 0){
                negTemp.push_back(arr[i]);
            } else if (arr[i] >= 0){
                posTemp.push_back(arr[i]);
            }
        }
        for (int i = 0; i < n; i++){
            arr[2*i] = negTemp[i];
            arr[2*i + 1] = posTemp[i];
        }
        return 0;
    }
};

// second approch 
class ArrayManipulator {
public:
    vector<int> rearrangeBySign(vector<int>& A) {
        int n = A.size();
        vector<int> ans(n, 0);
        int posIndex = 0, negIndex = 1;
        for (int i = 0; i < n; i++) {
            if (A[i] < 0) {
                ans[negIndex] = A[i];
                negIndex += 2;
            } else {
                ans[posIndex] = A[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};

int main() {
    // Initialize the input array
    vector<int> A = {1, 2, -4, -5};

    // Create an object of the class
    ArrayManipulator obj;

    // Call the rearrange function
    vector<int> result = obj.rearrangeBySign(A);

    // Print the rearranged array
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
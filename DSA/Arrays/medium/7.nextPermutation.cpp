#include <iostream>
#include <map>
#include <vector>
    
using namespace std;
// next permutation

// we can also STL function next_permutation(arr.begin(), arr.end());

// time complexity : O(n) + O(n) + O(n) = O(3n)
// space complexity : O(1)

// second approch : implemntation of next permutation without using STL function
class Solution {
    public : 
    int nextPermutation(vector <int> &arr){
        int n = arr.size();
        int index = -1;

        for (int i = n-2; i >= 0 ; i--){
            if (arr[i] < arr[i+1]){
                index = i;
                break;
            }
        }
        for (int i = n-1; i > index ; i--){
            if(arr[i] > arr[index]){
                swap(arr[i], arr[index]);
                break;
            }
        }

        reverse(arr.begin() + index + 1, arr.end());
        return 0;
    }
};


int main(){
    vector <int> arr = {2,1,5,4,3,0,0};
    Solution s;
    s.nextPermutation(arr);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}

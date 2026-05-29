#include <iostream>
#include <vector>
using namespace std;

// // sort 0 , 1 , 2 in the array and arrange in ascending order 

// Time Complexity: O(n),We traverse the array twice: once to count, once to overwrite. Each operation is O(n).
// Space Complexity: O(1)
class Solution {
    public : 
    int sortedArray(vector <int>& arr){
        int n = arr.size();
        int count0 = 0;
        int count1 =0;
        int count2 = 0;

        for (int i = 0 ; i < n; i++){
            if (arr[i] == 0) count0 ++;
            else if (arr[i] == 1) count1 ++;
            else count2++;
        }

        int index = 0;

        while(count0--) {
            arr[index++] = 0;
        };

        while (count1 --){
            arr[index++] = 1;
        };

        while (count2 --){
            arr[index ++] = 2;
        }
    }
};
// second approch => simply 2 passes , first for identify no. of 0,1,2 then update them

class Solution1 {
    public :
    int sortedArray1(vector <int>& arr){
        int n = arr.size();

        int count0 = 0;
        int count1 =0;
        int count2 = 0;

        for (int i = 0 ; i < n; i++){
            if (arr[i] == 0) count0 ++;
            else if (arr[i] == 1) count1 ++;
            else count2++;
        }

        for(int i = 0; i < count0 ; i++){
            arr[i] = 0;
        }
        for(int i = count0; i < count0 + count1 ; i++){
            arr[i] = 1;
        }
        for(int i = count1; i < count2 ; i++){
            arr[i] = 2;
        }
    }
};

int main() {
    vector<int> arr = {0, 2, 1, 2, 0, 1};

    Solution1 obj;
    obj.sortedArray1(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
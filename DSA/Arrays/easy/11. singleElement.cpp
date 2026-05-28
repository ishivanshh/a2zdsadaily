#include <iostream>
#include <vector>
using namespace std;

// number that appears once , other number appears twice
// TC : 0(N*N)
// SC : 0(1)
/*
class Solution{
    public: 
    int getSingleElement(vector<int>& arr){
        int n = arr.size();

        for (int i = 0; i < n; i++){
            int num = arr[i];
            int cnt = 0;

            for(int j = 0; j < n; j++){
                if (arr[j] ==num){
                    cnt ++;
                }
            if (cnt == 1) return num;
            }

            return -1;
        }
    }
};

*/

// HASHING => 
//TC :- O(N) + 0(N) + 0(N)
// SC :- 0(maxElement + 1)
class Solution{
    public : 
    int singleEleHashing(vector <int>& arr){
        int n = arr.size();
        int maxi = arr[0];
        for(int i = 0; i < n ; i++){
            maxi = max(arr[i], maxi);
        }
        vector<int> hash(maxi + 1, 0);

        for (int i = 0; i < n; i++){
            hash[arr[i]]++;
        }

        for (int i =0;i<n;i++){
            if(hash[arr[i]] == 1)
            return arr[i];
        }
        return -1;
    }
 };

 // Third approch => TC:- 0(N) SC:- 0(1)
 
class Solution {
public:
    // Function to find the single non-repeating element using XOR
    int getSingleXor(vector<int>& arr) {
        int n = arr.size();
        int xorr = 0;

        // XOR all elements. Duplicates cancel out, leaving the single element.
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }

        return xorr;
    }
};


int main() {
    vector<int> arr = {4, 4, 2, 1, 2};

    Solution obj;
    int ans = obj.singleEleHashing(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}
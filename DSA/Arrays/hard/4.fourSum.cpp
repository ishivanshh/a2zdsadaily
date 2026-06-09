#include <iostream>
#include <vector>
#include<set>
#include <unordered_map>

using namespace std;

// 4 sum 
class Solution {
    public :
    vector<vector<int>>fourSum (vector<int>&arr , int target){
        int n = arr.size();

        set<vector<int>>st;

        for(int i = 0; i < n ; i++){
            for(int j = i+1; j < n ; j++){
                for(int k = j +1 ; k < n ; k++){
                    for(int l = k +1; l < n ; l++){
                        if (arr[i] + arr[j] + arr[k] + arr[l] == target){
                            vector<int>temp = {arr[i] ,arr[j] , arr[k] , arr[l]};
                            sort(temp.begin() , temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};

// second approch using hashmap and reduce time complexity

class Solution1 {
    public :
    vector<vector<int>>fourSum1(vector<int>&arr , int target){
        int n = arr.size();

        set<int>hashset;
        set<vector<int>>st;
        for(int i = 0; i < n ; i++){
            for (int j = i + 1; j < n ; j++){
                for (int k = j +1; k < n ; k ++){
                    int sum = arr[i] + arr[j];
                    sum += arr[k];

                    int forth = target - sum;

                    if(hashset.find(forth) != hashset.end()){
                        vector<int>temp = {arr[i] , arr[j] , arr[k] , forth};
                        sort(temp.begin() , temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(arr[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin() , st.end());
        return ans;
    }
};


int main() {
    // Input array
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    // Target sum
    int target = 0;

    // Create object
    Solution1 obj;
    // Get all quadruplets
    vector<vector<int>> ans = obj.fourSum1(arr, target);

    // Print result
    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
    return 0;
}
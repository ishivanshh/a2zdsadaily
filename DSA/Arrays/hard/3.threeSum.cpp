#include <iostream>
#include <vector>
#include<set>
#include <unordered_map>

using namespace std;
// 3 sum 
class Solution {
    public :
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();

        set<vector<int>> st;

        for (int i = 0; i < n ; i ++){
            for (int j = i+1; j < n ; j ++){
                for(int k = j+1; k < n ; k++){
                    if(arr[i] + arr[j] + arr[k] == 0){
                        vector<int>temp = {arr[i] , arr[j] , arr[k]};
                        sort(temp.begin() , temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        // Convert set to vector
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;

    }
};

// second approch using hashmap 

class Solution {
    public :
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();

        set<vector<int>> ans;

        for (int i = 0; i < n ; i++){
            set<int>hashset;
            for (int j = i+1; j < n ; j++){
                int third = -(arr[i] + arr[j]);
                if(hashset.find(third) != hashset.end() ){
                    vector<int>temp = {arr[i], arr[j], third};
                    sort(temp.begin() , temp.end());
                    ans.insert(temp);
                }
                 // Add current element to set
                hashset.insert(arr[j]);
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};

// third approch 


int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    Solution obj;
    vector<vector<int>> res = obj.threeSum(arr);

    for (auto &triplet : res) {
        for (auto &num : triplet) cout << num << " ";
        cout << endl;
    }
};
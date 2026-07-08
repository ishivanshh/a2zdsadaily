#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public :
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        
    }
}



int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<vector<int>> result = sol.merge(intervals);

    for (auto interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public :
    int mySqrt(int n){
        if(n < 2) return n;
        int low = 1;
        int high = n/2;
        int ans = 1;
        while (low <= high ){
            int mid = (low + high) / 2;
            if (mid * mid <= n){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.mySqrt(8) << endl;
    return 0;
}
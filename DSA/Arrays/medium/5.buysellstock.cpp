#include <iostream>
#include <map>
#include <vector>
using namespace std;

// Buy and Sell Stock

class Solution {
public:
    int stockBuySell(vector<int>& arr) {
        int n = arr.size();
        int maxiProfit = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                maxiProfit = max(maxiProfit, arr[j] - arr[i]);
            }
        }
        return maxiProfit;
    }
};

// second approch 

class Solution2 {
    public :
    int stockBuySell1(vector<int>& arr){
        int n = arr.size();
        int mini = arr[0];
        int maxiProfit = 0;

        for (int i = 1; i < n; i++){
            int cost = arr[i] - mini;
            maxiProfit = max(maxiProfit, cost);
            mini = min(mini , arr[i]);
        }
        return maxiProfit;
    }
};


int main() {
    Solution2 sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Max Profit: "
         << sol.stockBuySell1(prices) << endl;

    return 0;
}
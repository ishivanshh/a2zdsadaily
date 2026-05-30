#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> arr = {0, 2, 1, 2, 0, 1};

    Solution3 obj;
    obj.dutchSorted(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
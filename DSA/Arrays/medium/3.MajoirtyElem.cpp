#include <iostream>
#include <map>
#include <vector>
using namespace std;
// majority element means number that appears more than n/2 times in the array

// first approch => select one element at a time from the array and again traverse the array to count how many times it appears in the array and if it is more than n/2 then return that element
// time complexity => O(n^2) and space complexity => O(1)
class Solution1
{
public:
    int majorityElement1(vector<int> &arr)
    {
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }
            if (count > n / 2)
                return arr[i];
        }
        return -1;
    }
};

// second approch => using map which store two things in pair , element and occurance (key,value) then print the value which is maximum then n/2 if exist return key of that particular value if not then return -1;

class Solution2
{
public:
    int majorityElement2(vector<int> &arr)
    {
        int n = arr.size();

        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second > n / 2)
                return it.first;
        }
        return -1;
    }
};

// third approch => MOORE'S VOTING ALGORITHM , take 2 pointer element = 0 and count = 0 starting from 1 to n , take first element take element = that element with count ++ if next element is same then count ++ if not then count --, if somewhere reaches between count = 0, then take that present element as new element .. then final check if that element > n/2 then return..

class Solution3
{
public:
    int majorityElement3(vector<int> &arr)
    {
        int n = arr.size();

        int cnt = 0;
        int ele;

        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                ele = arr[i];
            } else if (ele == arr[i]) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int count1 = 0;
        for (int i = 0 ; i<n;i++){
            if (arr[i] == ele)
            count1 ++;
        }
        if (count1 > n/2)
            return ele;
        return -1;
    }
};
    int main()
    {
        vector<int> arr = {2, 2, 1, 1, 1, 2, 1, 1 , 1 , 1 , 1 };

        // Create an instance of Solution class
        Solution3 sol;

        int ans = sol.majorityElement3(arr);

        // Print the majority element found
        cout << "The majority element is: " << ans << endl;

        return 0;
    }
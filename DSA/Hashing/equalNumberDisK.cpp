#include<iostream>
#include<vector>
using namespace std;

// Check if there are any two Equal numbers in an array at a distance less than or equal to k


// Brute Force :- Just Use 2 For loops and check if distance between any 2 Equal elements is less than or equal to k, print(yes), otherwise, we will print (no)
bool containsNearByDuplicate(vector<int>&nums , int k){
    int n = nums.size();
    for(int i =0; i < n ; i++){
        for(int j = i + 1; j < n && j <= i + k; j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
};

int main(){
    vector<int>nums = {1,1,3,1,2,3};
    int k = 2;
    if(containsNearByDuplicate(nums , k)){
        cout << "there are two equal numbers with distance " << k << "";
    } else {
        cout << "no two equal numbers with distance " << k << endl;
    } return 0;
}
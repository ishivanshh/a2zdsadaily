#include <iostream>
#include <set>

using namespace std;

// first approch -> using the set data structre as it stores only unique elements then return the last index of the array which is size of the set TC:- O(n) and SC:- O(n) for storing the unique elements in the set
int removeDuplicates(int arr[] , int n){
    set <int > st;
    for(int i = 0; i < n ; i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for (auto it : st){
        arr[index] = it;
        index++;
    }
    return index;
}
// second approch -> using the two pointer method TC:- O(n) and SC:- O(1)
// take i = 0 and j = 1 to n, compare if the elements at i and j are equal then move j(nothing) forward only but if they are not equal then move i forward and copy the element at j to i and loop continues.


int sortedArray(int arr[] , int n){
    int i = 0;
    for (int j = 1; j < n ; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){ 
        cin >> arr[i];
    }
    cout << sortedArray(arr , n) << endl;
    return 0;    
};
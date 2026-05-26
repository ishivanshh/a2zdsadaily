#include <iostream>
#include <set>

using namespace std;
// first approch -> using the set data 
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
int sortedArray(int arr[] , int n){
    int i;
    int j;
    for(i = 0; i < n-1;i++){
        for(j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                j++;
            } else if(arr[i] != arr[j]){
                swap(arr[i] , arr[j]);
            }
        }
};

int main(){
    int arr[6];
    for(int i = 0; i < 6; i++){ 
        cin >> arr[i];
    }
    cout << sortedArray(arr , 6) << endl;

    return 0;    
};
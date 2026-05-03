#include <iostream>
using namespace std;
// first largest element in an array

int lar(int arr[], int n) {
    int largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// second largest element in an array
int secondLargest(int arr[], int n) {

    if(n < 2) return -1;

    int largest = INT_MIN;
    int slargest = INT_MIN;

    for(int i = 0; i < n; i++) {

        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }

    if(slargest == INT_MIN) return -1;
    return slargest;
}

// int main() {
//     int n; 
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << lar(arr, n) << " " << secondLargest(arr, n);
//     return 0;
// }

// second smallest element in an array.



// leatcode : check if array is sorted or not.

// rotate an array by k times.

/*
void leftRotate(int arr[],int n,int d){
    d = d % n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i = d; i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
        return 0;
}

*/

// union of two sorted arrays.
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionOfSortedArrays(int arr1[], int arr2[], int n, int m) {
    set<int> st;

    for(int i = 0; i < n; i++) {
        st.insert(arr1[i]);
    }

    for(int i = 0; i < m; i++) {
        st.insert(arr2[i]);
    }

    vector<int> temp;

    for(auto it : st) {
        temp.push_back(it);
    }

    return temp;
}

int main() {

    int n;
    cin >> n;
    int arr1[n];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];

    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = unionOfSortedArrays(arr1, arr2, n, m);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}

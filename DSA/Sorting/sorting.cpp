#include<iostream>
#include <vector>

using namespace std;


// time complexity => o(n*n)
void selection_sort(int arr[], int n)
{
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}



// time complexity => o(n*n) but on adding a flag to check swaps it reduces to o(n) when the array is already sorted
void bubble_sort(int arr[], int n){
    for(int i = n-1; i >= 0; i--){
        bool didSwaps = false;
        for(int j = 0;j<=i-1;j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        if(didSwaps == false){
            break;
    }
}
}



// time complexity o(n*n)
void insertion_sort(int arr[], int n)
{
    for(int i = 1; i <= n - 1; i++){
        int j = i;

        while(j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}



// time complexity => o(nlogn) and space complexity => o(n)
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // copy back
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mS(vector <int> &arr, int low, int high){
    if (low >= high) return;
    int mid = (low + high) / 2;

    mS(arr,low,mid);
    mS(arr,mid+1,high);

    merge(arr,low,mid,high);
}

void mergeSort(vector <int> &arr , int n){
    mS(arr , 0, n-1);
}


// time complexity => o(nlogn) and space complexity => o(logn)
int partition(vector<int> arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i<= high -1){
            i++;
        }
        while(arr[j] > pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
}

void qs(vector<int> arr,int low,  int high){
    if(low<high){
        int pindex= partition(arr,low,high);
        qs(arr,low,pindex-1);
        qs(arr,pindex+1,high);
    }
}

vector<int> quick_sort( vector<int> arr, int low, int high){
    qs(arr,0,arr.size()-1);
    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quick_sort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
#include<iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=1;j<=n-1;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}


void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0;i--){
        for(int j = 0;j<=i-1;j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i<= high -1){
            i++;
        }
        while(arr[i] > pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
}

void quick_sort(int arr[],int low,  int high){
    if(low<high){
        int pindex= partition(arr,low,high);
        quick_sort(arr,low,pindex-1);
        quick_sort(arr,pindex+1,high);
    }
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
# Sorting

## 1. SelectionSort ;
find minimum and swap with the first index of array again find minimum and swap with second element in array and soo on dont swap last element it will already got sorted.
- it will be in ascending order.


## 2. BubbleSort : 


## InsertionSort : 
take an element and place in its correct order.

## mergeSort : 
divide and merge 

```
mergeSort(arr, low , high){
    if(low >= high) return;
    mid = low + high /2;
    mergeSort(Arr,low, high);
    mergeSort(arr, mid+1,high);
    merge(arr,low,mid,high)
}
```

## QuickSort :
pick a pivot or any number in the array, and place the number in the sorted place in that array , repeat these steps again and again...

when pivot put on correct place , make other smaller elements on left of pivot and greater on right side of it. 
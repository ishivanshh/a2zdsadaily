# Sorting

## 1. SelectionSort ;
find minimum and swap with the first index of array again find minimum and swap with second element in array and soo on dont swap last element it will already got sorted.
- it will be in ascending order.


## 2. BubbleSort : 
outer loop starts from back, and inner loop from front compare starting 2 element everytime if first element is greater than second element then swap untill it reaches its correct position.


## InsertionSort : 
take an element and place in its correct order. select index 1 means second element check 2 condition weather selected element is greater than zero or not &&(and) second element is greater than first element if any condition fails swap the elements...

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

# RECURSION

## 1.
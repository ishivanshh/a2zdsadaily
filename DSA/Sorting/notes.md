# 📘 Sorting Algorithms Notes

A beginner-friendly guide to important sorting algorithms used in DSA and coding interviews.

---

# 📌 What is Sorting?

Sorting means arranging elements in a particular order.

### Types of Ordering
- Ascending Order → `1 2 3 4 5`
- Descending Order → `5 4 3 2 1`

Sorting helps in:
- Faster searching
- Better data organization
- Efficient algorithms

---

# 🔷 1. Selection Sort

## 📖 Definition
Selection Sort repeatedly finds the minimum element from the unsorted part of the array and places it at the beginning.

---

## ⚙️ Working
1. Find the minimum element in the array.
2. Swap it with the first index.
3. Again find minimum from remaining array.
4. Swap with second index.
5. Repeat until array gets sorted.

---

## 🧠 Example

### Original Array
```txt
64 25 12 22 11
```

### Pass 1
```txt
11 25 12 22 64
```

### Pass 2
```txt
11 12 25 22 64
```

### Final Output
```txt
11 12 22 25 64
```

---

## 💻 Code

```cpp
for(int i = 0; i < n-1; i++){
    int minIndex = i;

    for(int j = i+1; j < n; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
    }

    swap(arr[i], arr[minIndex]);
}
```

---

## ⏱️ Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n²) |
| Average | O(n²) |
| Worst | O(n²) |

### 📦 Space Complexity
```txt
O(1)
```

---

# 🔷 2. Bubble Sort

## 📖 Definition
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

Largest element moves to the end after every pass like a bubble rising to the top.

---

## ⚙️ Working
1. Compare first two elements.
2. Swap if first is greater than second.
3. Continue till end of array.
4. Repeat process again.

---

## 🧠 Example

### Original Array
```txt
5 1 4 2 8
```

### Pass 1
```txt
1 4 2 5 8
```

### Final Output
```txt
1 2 4 5 8
```

---

## 💻 Code

```cpp
for(int i = n-1; i >= 0; i--){

    for(int j = 0; j < i; j++){

        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
```

---

## ⏱️ Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

### 📦 Space Complexity
```txt
O(1)
```

---

# 🔷 3. Insertion Sort

## 📖 Definition
Insertion Sort takes one element at a time and places it in its correct sorted position.

Works similar to arranging playing cards in hand.

---

## ⚙️ Working
1. Start from second element.
2. Compare with previous elements.
3. Shift larger elements to the right.
4. Insert current element at correct position.

---

## 🧠 Example

### Original Array
```txt
5 3 4 1
```

### Pass 1
```txt
3 5 4 1
```

### Pass 2
```txt
3 4 5 1
```

### Final Output
```txt
1 3 4 5
```

---

## 💻 Code

```cpp
for(int i = 1; i < n; i++){

    int current = arr[i];
    int j = i - 1;

    while(j >= 0 && arr[j] > current){
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = current;
}
```

---

## ⏱️ Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

### 📦 Space Complexity
```txt
O(1)
```

---

# 🔷 4. Merge Sort

## 📖 Definition
Merge Sort uses the Divide and Conquer technique.

It divides the array into smaller parts, sorts them, and merges them back together.

---

## ⚙️ Working
1. Divide array into two halves.
2. Recursively sort both halves.
3. Merge sorted halves.

---

## 🧠 Example

### Original Array
```txt
8 3 4 12 5 6
```

### Divided
```txt
8 3 4 | 12 5 6
```

### Final Output
```txt
3 4 5 6 8 12
```

---

## 💻 Pseudocode

```cpp
mergeSort(arr, low, high){

    if(low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);

    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}
```

---

## ⏱️ Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n log n) |

### 📦 Space Complexity
```txt
O(n)
```

---

# 🔷 5. Quick Sort

## 📖 Definition
Quick Sort selects a pivot element and places it at its correct sorted position.

Smaller elements go to the left side and larger elements go to the right side.

---

## ⚙️ Working
1. Pick a pivot element.
2. Place pivot at correct position.
3. Put smaller elements on left.
4. Put greater elements on right.
5. Repeat recursively.

---

## 🧠 Example

### Original Array
```txt
6 3 9 5 2 8
```

### Pivot = 6

```txt
3 5 2 6 9 8
```

### Final Output
```txt
2 3 5 6 8 9
```

---

## 💻 Pseudocode

```cpp
quickSort(arr, low, high){

    if(low < high){

        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);

        quickSort(arr, pivotIndex + 1, high);
    }
}
```

---

## ⏱️ Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n²) |

### 📦 Space Complexity
```txt
O(log n)
```

---

# 📊 Sorting Algorithms Comparison

| Algorithm | Best | Average | Worst | Space |
|---|---|---|---|---|
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) |

---

# 📌 Important Interview Points

## Stable Sorting
Maintains relative order of equal elements.

### Stable Algorithms
- Bubble Sort
- Insertion Sort
- Merge Sort

### Unstable Algorithms
- Selection Sort
- Quick Sort

---

# 🚀 Which Sorting Algorithm is Best?

| Situation | Best Choice |
|---|---|
| Small Arrays | Insertion Sort |
| General Purpose | Quick Sort |
| Stable Sorting Needed | Merge Sort |
| Low Memory Usage | Quick Sort |
| Guaranteed Performance | Merge Sort |

---

# 📚 Recursion

## 📖 Definition
Recursion is a technique where a function calls itself repeatedly until a base condition is met.

---

## Example

```cpp
void print(int n){

    if(n == 0) return;

    cout << n << " ";

    print(n-1);
}
```

---
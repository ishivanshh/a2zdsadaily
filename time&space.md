# 📘 Time Complexity & Space Complexity Notes

A beginner-friendly guide to understanding **Time Complexity**, **Space Complexity**, sorting algorithms, hashing, and important DSA complexities for coding interviews and competitive programming.

---

# 📌 What is Time Complexity?

Time Complexity measures how the running time of an algorithm grows with input size `n`.

Example:

```cpp
for(int i = 0; i < n; i++){
    cout << i;
}
```

Complexity: `O(n)`

---

# 📌 What is Space Complexity?

Space Complexity measures how much extra memory an algorithm uses.

Example:

```cpp
vector<int> arr(n);
```

Complexity: `O(n)`

---

# 🚀 Common Time Complexities

| Complexity | Meaning | Performance |
|---|---|---|
| `O(1)` | Constant Time | Extremely Fast |
| `O(log n)` | Logarithmic | Very Fast |
| `O(n)` | Linear | Good |
| `O(n log n)` | Linearithmic | Efficient |
| `O(n²)` | Quadratic | Slow |
| `O(2ⁿ)` | Exponential | Very Slow |
| `O(n!)` | Factorial | Worst |

---

# 🔥 Important Examples

## ✅ Constant Time — O(1)

```cpp
cout << arr[5];
```

Examples:
- Array indexing
- Stack push/pop
- Queue operations
- HashMap lookup

---

## ✅ Linear Time — O(n)

```cpp
for(int i=0;i<n;i++)
```

Examples:
- Linear Search
- Array Traversal

---

## ✅ Quadratic Time — O(n²)

```cpp
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
```

Examples:
- Bubble Sort
- Selection Sort

---

## ✅ Logarithmic Time — O(log n)

```cpp
while(n > 1){
    n /= 2;
}
```

Examples:
- Binary Search
- Heap operations

---

## ✅ Linearithmic Time — O(n log n)

Examples:
- Merge Sort
- Quick Sort
- Heap Sort

---

# 📚 Sorting Algorithms Comparison

| Algorithm | Best | Average | Worst | Space | Stable |
|---|---|---|---|---|---|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | No |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | No |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | No |

---

# ⚡ Hashing Complexity

Using:
- `unordered_map`
- `unordered_set`

| Operation | Average | Worst |
|---|---|---|
| Insert | O(1) | O(n) |
| Search | O(1) | O(n) |
| Delete | O(1) | O(n) |

---

# 🧠 Data Structure Complexities

| Data Structure | Access | Search | Insert | Delete |
|---|---|---|---|---|
| Array | O(1) | O(n) | O(n) | O(n) |
| Linked List | O(n) | O(n) | O(1) | O(1) |
| Stack | O(1) | O(n) | O(1) | O(1) |
| Queue | O(1) | O(n) | O(1) | O(1) |
| HashMap | — | O(1) | O(1) | O(1) |
| BST | O(log n) | O(log n) | O(log n) | O(log n) |
| Heap | — | O(n) | O(log n) | O(log n) |

---

# 📦 STL Complexity in C++

| STL | Complexity |
|---|---|
| `vector.push_back()` | O(1) amortized |
| `vector.insert()` | O(n) |
| `stack.push/pop()` | O(1) |
| `queue.push/pop()` | O(1) |
| `set.insert()` | O(log n) |
| `unordered_set.insert()` | O(1) avg |
| `map.insert()` | O(log n) |
| `unordered_map.insert()` | O(1) avg |
| `priority_queue.push/pop()` | O(log n) |

---

# 📈 Interview Complexity Guide

| Input Size | Preferred Complexity |
|---|---|
| `10` | O(n!) |
| `20` | O(2ⁿ) |
| `100` | O(n³) |
| `1000` | O(n²) |
| `10⁵` | O(n log n) |
| `10⁶` | O(n) |

---

# 🎯 Most Important Algorithms to Remember

| Algorithm | Complexity |
|---|---|
| Binary Search | O(log n) |
| Merge Sort | O(n log n) |
| Quick Sort | O(n log n) avg |
| BFS | O(V + E) |
| DFS | O(V + E) |
| Dijkstra | O(E log V) |
| HashMap Lookup | O(1) avg |

---

# 📌 Important Rules

## Rule 1: Remove Constants

```cpp
O(2n) → O(n)
```

## Rule 2: Keep Dominant Term

```cpp
O(n² + n) → O(n²)
```

## Rule 3: Different Inputs → Different Variables

```cpp
for(i=0;i<n;i++)
for(j=0;j<m;j++)
```

Complexity: `O(nm)`

---

# 🏆 Best Topics to Practice

- Sorting
- Hashing
- Binary Search
- Recursion
- Trees
- Graphs
- Dynamic Programming

---

# 📖 Final Summary

| Complexity | Meaning |
|---|---|
| `O(1)` | Constant |
| `O(log n)` | Divide by 2 |
| `O(n)` | Linear |
| `O(n log n)` | Efficient Sorting |
| `O(n²)` | Nested Loops |
| `O(2ⁿ)` | Exponential |
| `O(n!)` | Factorial |

---

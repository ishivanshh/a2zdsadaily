# 📚 What is STL?

STL (Standard Template Library) is a collection of:

* Containers
* Iterators
* Algorithms
* Functors

that help write efficient and reusable C++ code.

---

# 📦 STL Components

| Component  | Purpose            |
| ---------- | ------------------ |
| Containers | Store data         |
| Iterators  | Traverse data      |
| Algorithms | Perform operations |
| Functors   | Custom operations  |

---

# 🔹 Pair

Used to store two values together.

```cpp
#include <utility>
using namespace std;

pair<int,int> p = {10,20};

cout << p.first << endl;
cout << p.second << endl;
```

### Output

```txt
10
20
```

---

# 🔹 Vector

Dynamic array in C++.

```cpp
#include <vector>
using namespace std;

vector<int> v;

v.push_back(10);
v.push_back(20);

for(auto it : v){
    cout << it << " ";
}
```

### Output

```txt
10 20
```

## Important Functions

| Function    | Purpose             |
| ----------- | ------------------- |
| push_back() | Insert at end       |
| pop_back()  | Remove last element |
| size()      | Total elements      |
| clear()     | Remove all elements |
| erase()     | Delete element      |
| insert()    | Insert element      |

---

# 🔹 List

Implemented as a doubly linked list.

```cpp
#include <list>
using namespace std;

list<int> ls;

ls.push_back(1);
ls.push_front(2);

for(auto it : ls){
    cout << it << " ";
}
```

### Output

```txt
2 1
```

## Features

* Fast insertion and deletion
* Dynamic size
* No random indexing

---

# 🔹 Deque

Double-ended queue.

```cpp
#include <deque>
using namespace std;

deque<int> dq;

dq.push_back(1);
dq.push_front(2);

for(auto it : dq){
    cout << it << " ";
}
```

### Output

```txt
2 1
```

## Features

* Insert/delete from both ends
* Random access supported

---

# 🔹 Stack

Works on LIFO (Last In First Out).

```cpp
#include <stack>
using namespace std;

stack<int> st;

st.push(1);
st.push(2);
st.push(3);

cout << st.top() << endl;

st.pop();

cout << st.top();
```

### Output

```txt
3
2
```

## Important Functions

| Function | Purpose        |
| -------- | -------------- |
| push()   | Insert element |
| pop()    | Remove top     |
| top()    | Access top     |
| empty()  | Check if empty |

---

# 🔹 Queue

Works on FIFO (First In First Out).

```cpp
#include <queue>
using namespace std;

queue<int> q;

q.push(1);
q.push(2);
q.push(3);

cout << q.front() << endl;

q.pop();

cout << q.front();
```

### Output

```txt
1
2
```

---

# 🔹 Priority Queue

Largest element stays at the top by default.

```cpp
#include <queue>
using namespace std;

priority_queue<int> pq;

pq.push(5);
pq.push(2);
pq.push(10);

cout << pq.top();
```

### Output

```txt
10
```

## Min Heap

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

---

# 🔹 Set

Stores unique sorted values.

```cpp
#include <set>
using namespace std;

set<int> st;

st.insert(1);
st.insert(5);
st.insert(1);

for(auto it : st){
    cout << it << " ";
}
```

### Output

```txt
1 5
```

---

# 🔹 Multiset

Allows duplicate values.

```cpp
multiset<int> ms;

ms.insert(1);
ms.insert(1);
```

---

# 🔹 Unordered Set

Stores unique values in random order.

```cpp
#include <unordered_set>
using namespace std;

unordered_set<int> us;
```

---

# 🔹 Map

Stores key-value pairs in sorted order.

```cpp
#include <map>
using namespace std;

map<int,string> mp;

mp[1] = "Shivi";
mp[2] = "Rahul";

cout << mp[1];
```

### Output

```txt
Shivi
```

---

# 🔹 Unordered Map

Fast hashmap implementation.

```cpp
#include <unordered_map>
using namespace std;

unordered_map<int,int> mp;
```

---

# 🔹 Multimap

Allows duplicate keys.

```cpp
multimap<int,string> mp;
```

---

# 🔹 Algorithms

```cpp
#include <algorithm>
```

---

## sort()

```cpp
sort(v.begin(), v.end());
```

---

## Reverse Sort

```cpp
sort(v.rbegin(), v.rend());
```

---

## reverse()

```cpp
reverse(v.begin(), v.end());
```

---

## max_element()

```cpp
*max_element(v.begin(), v.end())
```

---

## min_element()

```cpp
*min_element(v.begin(), v.end())
```

---

## count()

```cpp
count(v.begin(), v.end(), 5)
```

---

## find()

```cpp
find(v.begin(), v.end(), 3)
```

---

# 🔹 Iterators

Used to traverse containers.

| Iterator | Purpose            |
| -------- | ------------------ |
| begin()  | First element      |
| end()    | After last element |
| rbegin() | Reverse start      |
| rend()   | Reverse end        |

---

## Example

```cpp
for(auto it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
}
```

---

## Reverse Iteration

```cpp
for(auto it = v.rbegin(); it != v.rend(); it++){
    cout << *it << " ";
}
```

---

# ⚡ Time Complexity Table

| Container     | Insert       | Delete       | Search       |
| ------------- | ------------ | ------------ | ------------ |
| vector        | O(1) at end  | O(n)         | O(n)         |
| list          | O(1)         | O(1)         | O(n)         |
| deque         | O(1)         | O(1)         | O(n)         |
| set           | O(log n)     | O(log n)     | O(log n)     |
| unordered_set | O(1) average | O(1) average | O(1) average |
| map           | O(log n)     | O(log n)     | O(log n)     |
| unordered_map | O(1) average | O(1) average | O(1) average |

---

# C++ STL Functions and Operations

This document focuses on commonly used C++ Standard Template Library (STL) containers and their operations, with examples and explanations.

---

## Vectors

### Overview:
A dynamic array that can grow or shrink in size.

### Common Operations:

#### Initialization:
```cpp
#include <vector>
using namespace std;

vector<int> v1;               // Empty vector
vector<int> v2(5);            // Vector of size 5 with default values (0 for int)
vector<int> v3(5, 10);        // Vector of size 5 with all elements initialized to 10
vector<int> v4 = {1, 2, 3};   // Vector with initial values
```

#### Adding and Removing Elements:
```cpp
v1.push_back(4);  // Adds 4 to the end
v1.pop_back();    // Removes the last element
```

#### Accessing Elements:
```cpp
cout << v1[0];       // Access using index
cout << v1.at(0);    // Access with bounds checking
```

#### Iteration:
```cpp
for (int x : v1) {
    cout << x << " ";
}

for (auto it = v1.begin(); it != v1.end(); ++it) {
    cout << *it << " ";
}
```

#### Other Operations:
```cpp
v1.insert(v1.begin(), 10);     // Inserts 10 at the beginning
v1.erase(v1.begin() + 1);      // Removes the second element
v1.clear();                    // Clears all elements
cout << v1.size();             // Returns the size
cout << v1.empty();            // Checks if empty (1 for true, 0 for false)
```

#### Sorting:
```cpp
#include <algorithm>
sort(v1.begin(), v1.end());       // Ascending
sort(v1.rbegin(), v1.rend());     // Descending
```

---

## Sets

### Overview:
A collection of unique elements stored in sorted order.

### Common Operations:

#### Initialization:
```cpp
#include <set>
set<int> s;
```

#### Adding and Removing Elements:
```cpp
s.insert(5);        // Adds 5
s.erase(5);         // Removes 5
s.clear();          // Clears the set
```

#### Accessing Elements:
```cpp
if (s.find(5) != s.end()) {
    cout << "Found 5";
}

cout << s.count(5);  // Checks if 5 is in the set (1 for true, 0 for false)
```

#### Iteration:
```cpp
for (int x : s) {
    cout << x << " ";
}

for (auto it = s.rbegin(); it != s.rend(); ++it) {
    cout << *it << " ";
}
```

---

## Maps

### Overview:
Stores key-value pairs, sorted by keys.

### Common Operations:

#### Initialization:
```cpp
#include <map>
map<string, int> m;
m["apple"] = 2;
m["banana"] = 5;
```

#### Adding and Removing Elements:
```cpp
m.insert({"orange", 3});
m.erase("apple");
```

#### Accessing Elements:
```cpp
cout << m["banana"] << endl;  // 5

if (m.find("banana") != m.end()) {
    cout << "Key exists";
}
```

#### Iteration:
```cpp
for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
}
```

---

## Deque

### Overview:
A double-ended queue that supports insertion and deletion at both ends.

### Common Operations:

#### Initialization:
```cpp
#include <deque>
deque<int> dq;
```

#### Adding and Removing Elements:
```cpp
dq.push_back(1);   // Adds 1 to the back
dq.push_front(2);  // Adds 2 to the front
dq.pop_back();     // Removes the last element
dq.pop_front();    // Removes the first element
```

#### Iteration:
```cpp
for (int x : dq) {
    cout << x << " ";
}
```

---

## Priority Queue

### Overview:
A max-heap by default.

### Common Operations:

#### Initialization:
```cpp
#include <queue>
priority_queue<int> pq;                 // Max-heap
priority_queue<int, vector<int>, greater<int>> minHeap;  // Min-heap
```

#### Adding and Removing Elements:
```cpp
pq.push(10);     // Adds 10
pq.push(5);      // Adds 5
pq.pop();        // Removes the top element
```

#### Accessing Elements:
```cpp
cout << pq.top();  // Returns the largest element (for max-heap)
```

---

## List

### Overview:
A doubly-linked list.

### Common Operations:

#### Initialization:
```cpp
#include <list>
list<int> l;
```

#### Adding and Removing Elements:
```cpp
l.push_back(1);    // Adds 1 to the end
l.push_front(2);   // Adds 2 to the front
l.pop_back();      // Removes the last element
l.pop_front();     // Removes the first element
```

#### Iteration:
```cpp
for (int x : l) {
    cout << x << " ";
}

for (auto it = l.begin(); it != l.end(); ++it) {
    cout << *it << " ";
}
```

#### Special Operations:
```cpp
l.reverse();    // Reverses the list
l.sort();       // Sorts the list
```

---

## Stack

### Overview:
Last-In-First-Out (LIFO) data structure.

### Common Operations:

#### Initialization:
```cpp
#include <stack>
stack<int> st;
```

#### Adding and Removing Elements:
```cpp
st.push(1);    // Adds 1
top();         // Returns the top element
st.pop();      // Removes the top element
```

---

## Queue

### Overview:
First-In-First-Out (FIFO) data structure.

### Common Operations:

#### Initialization:
```cpp
#include <queue>
queue<int> q;
```

#### Adding and Removing Elements:
```cpp
q.push(1);   // Adds 1 to the queue
q.pop();     // Removes the front element
```

#### Accessing Elements:
```cpp
cout << q.front();  // Access the front element
cout << q.back();   // Access the back element
```

---

This document captures the essential STL containers and their operations for efficient competitive programming. Let me know if you want to expand it further!

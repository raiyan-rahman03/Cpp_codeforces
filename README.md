# C++ Notes for Competitive Programming

## Base Structure of a C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    return 0;
}
```

## Input / Output
### Input
```cpp
int x;
cin >> x;  // Takes input from the user
```

### Output
```cpp
cout << "Value: " << x << endl;  // Prints output to the console
```

### Fast Input / Output
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}
```

---

## Data Types
### Basic Types:
- `int` (integer numbers)
- `float` (decimal numbers)
- `double` (large decimal numbers)
- `char` (single character)
- `bool` (true/false)
- `string` (text - needs `#include<string>`)

### Example:
```cpp
int a = 10;
float b = 5.5;
double c = 3.14159;
char d = 'A';
bool e = true;
string f = "Hello";
```

---

## If-Else Statements
```cpp
if (condition) {
    // code when condition is true
} else {
    // code when condition is false
}
```

### Example:
```cpp
int x = 10;
if (x > 5) {
    cout << "x is greater than 5" << endl;
} else {
    cout << "x is less than or equal to 5" << endl;
}
```

---

## Switch Statement
```cpp
switch (variable) {
    case value1:
        // code for value1
        break;
    case value2:
        // code for value2
        break;
    default:
        // default code
}
```

### Example:
```cpp
char grade = 'A';
switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good!" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
}
```

---

## Loops
### For Loop
```cpp
for (int i = 0; i < n; i++) {
    // code block
}
```

### While Loop
```cpp
while (condition) {
    // code block
}
```

### Do-While Loop
```cpp
do {
    // code block
} while (condition);
```

---

## Arrays and Strings
### Arrays
```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### Input an Array Using For Loop
```cpp
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
```

### Strings
```cpp
#include <string>
string name = "John";
cout << name << endl;
```

---

## STL Containers
### Vectors
- Dynamic array that can grow or shrink in size.
```cpp
#include <vector>
vector<int> v = {1, 2, 3};
v.push_back(4); // Adds 4 to the vector
v.pop_back();   // Removes the last element
```

### Iterating Through a Vector
```cpp
for (int x : v) {
    cout << x << " ";
}
```

### Reverse Iteration
```cpp
for (auto it = v.rbegin(); it != v.rend(); ++it) {
    cout << *it << " ";
}
```

### Sorting a Vector
```cpp
#include <algorithm>
sort(v.begin(), v.end()); // Ascending order
sort(v.rbegin(), v.rend()); // Descending order
```

---

### Sets
- Used for storing unique elements in sorted order.
```cpp
#include <set>
set<int> s;
s.insert(5);
s.insert(1);
s.insert(3);
```

### Set Operations
```cpp
s.erase(3);        // Removes the element 3
cout << s.count(1); // Checks if 1 is in the set (1 if true, 0 if false)
if (s.find(5) != s.end()) {
    cout << "Found 5";
}
```

### Iterating Through a Set
```cpp
for (int x : s) {
    cout << x << " ";
} // Output: 1 5
```

---

### Maps
- Stores key-value pairs.
```cpp
#include <map>
map<string, int> m;
m["apple"] = 2;
m["banana"] = 5;
```

### Map Operations
```cpp
m.erase("apple"); // Removes the key "apple"
cout << m["banana"] << endl; // Accesses the value of "banana"
if (m.find("banana") != m.end()) {
    cout << "Key exists";
}
```

### Iterating Through a Map
```cpp
for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
}
```

---

### Priority Queue
- Max heap by default.
```cpp
#include <queue>
priority_queue<int> pq;
pq.push(10);
pq.push(5);
pq.push(15);
```

### Min Heap
```cpp
priority_queue<int, vector<int>, greater<int>> minHeap;
minHeap.push(10);
minHeap.push(5);
minHeap.push(15);
```

### Example:
```cpp
while (!pq.empty()) {
    cout << pq.top() << " ";  // Output: 15 10 5
    pq.pop();
}
```

---

### Deque
- Double-ended queue.
```cpp
#include <deque>
deque<int> dq;
dq.push_back(1);
dq.push_front(2);
```

### Example:
```cpp
for (int x : dq) {
    cout << x << " ";  // Output: 2 1
}
```

### Deque Operations
```cpp
dq.pop_back();  // Removes the last element
dq.pop_front(); // Removes the first element
```

---

## Algorithms
### Sorting
```cpp
#include <algorithm>
vector<int> v = {4, 2, 3, 1};
sort(v.begin(), v.end());
```

### Binary Search
```cpp
bool found = binary_search(v.begin(), v.end(), 3);
```

### Lower Bound / Upper Bound
```cpp
int lb = lower_bound(v.begin(), v.end(), 3) - v.begin(); // First position >= 3
int ub = upper_bound(v.begin(), v.end(), 3) - v.begin(); // First position > 3
```

---

## Common Functions
### GCD / LCM
```cpp
#include <algorithm>
int gcd = __gcd(a, b);
int lcm = (a * b) / gcd;
```

### Power
```cpp
#include <cmath>
double result = pow(base, exponent);
```

### Modular Arithmetic
```cpp
const int MOD = 1e9 + 7;
int add_mod = (a + b) % MOD;
int mul_mod = (a * b) % MOD;
```

### Prefix Sum
```cpp
vector<int> prefixSum(n);
prefixSum[0] = arr[0];
for (int i = 1; i < n; i++) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
}
```

---

## Debugging
### Debugging Output
```cpp
cerr << "Debug: " << variable << endl;
```

---

## Techniques for Competitive Programming
### Reverse Iteration
```cpp
for (auto it = container.rbegin(); it != container.rend(); ++it) {
    cout << *it << " ";
}
```

### Sliding Window Technique
```cpp
int left = 0, sum = 0;
for (int right = 0; right < n; right++) {
    sum += arr[right];
    while (sum > target) {
        sum -= arr[left++];
    }
}
```

### Two Pointers
```cpp
int left = 0, right = n - 1;
while (left < right) {
    if (arr[left] + arr[right] == target) {
        cout << left << " " << right << endl;
        break;
    } else if (arr[left] + arr[right] < target) {
        left++;
    } else {
        right--;
    }
}
```

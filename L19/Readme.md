### **1️⃣ Vector and Pair in C++** 🚀  

---

#### **Vectors**  
A **vector** is a dynamic array provided by the Standard Template Library (STL) in C++.  

#### **Key Features**:  
- Dynamic resizing.  
- Random access (like arrays).  
- Useful methods: `push_back`, `pop_back`, `size`, `clear`, `erase`.  

#### **Example**:  
```cpp  
#include <iostream>  
#include <vector>  
using namespace std;  

int main() {  
    vector<int> vec;  

    vec.push_back(10);  // Add elements  
    vec.push_back(20);  
    vec.push_back(30);  

    cout << "Elements in vector: ";  
    for (int num : vec) cout << num << " ";  
    cout << endl;  

    vec.pop_back();  // Remove the last element  

    cout << "After pop_back: ";  
    for (int num : vec) cout << num << " ";  
    cout << endl;  

    return 0;  
}  
```  

**Output**:  
```
Elements in vector: 10 20 30  
After pop_back: 10 20  
```  

---

#### **Pairs**  
A **pair** is a container that holds two elements of possibly different types.  

#### **Example**:  
```cpp  
#include <iostream>  
#include <vector>  
using namespace std;  

int main() {  
    pair<int, string> p = {1, "Hello"};  

    cout << "Pair: (" << p.first << ", " << p.second << ")" << endl;  

    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};  

    cout << "Vector of pairs: ";  
    for (auto& pr : vec) {  
        cout << "(" << pr.first << ", " << pr.second << ") ";  
    }  
    cout << endl;  

    return 0;  
}  
```  

**Output**:  
```
Pair: (1, Hello)  
Vector of pairs: (1, 2) (3, 4) (5, 6)  
```  

---

### **2️⃣ DNF Sort (Dutch National Flag Algorithm)** 🚀  

---

#### **Problem**  
Sort an array of 0s, 1s, and 2s without using extra space.  

---

#### **Approach**  
- Use three pointers: `low`, `mid`, and `high`.  
- Traverse the array:  
  - If the current element is `0`, swap it with `low` and increment `low` and `mid`.  
  - If it is `1`, increment `mid`.  
  - If it is `2`, swap it with `high` and decrement `high`.  

---

#### **Code**  
```cpp  
#include <iostream>  
#include <vector>  
using namespace std;  

void dnfSort(vector<int>& arr) {  
    int low = 0, mid = 0, high = arr.size() - 1;  

    while (mid <= high) {  
        if (arr[mid] == 0) {  
            swap(arr[low], arr[mid]);  
            low++;  
            mid++;  
        } else if (arr[mid] == 1) {  
            mid++;  
        } else {  
            swap(arr[mid], arr[high]);  
            high--;  
        }  
    }  
}  

int main() {  
    vector<int> arr = {2, 0, 2, 1, 1, 0};  

    dnfSort(arr);  

    for (int num : arr) cout << num << " ";  
    cout << endl;  

    return 0;  
}  
```  

**Output**:  
```
0 0 1 1 2 2  
```  

---

### **3️⃣ Wave Sort** 🚀  

---

#### **Problem**  
Arrange elements of an array in a wave-like manner:  
\[
a[0] \geq a[1] \leq a[2] \geq a[3] \ldots
\]  

---

#### **Approach**  
- Sort the array.  
- Swap adjacent elements in pairs: `arr[i]` with `arr[i+1]`.  

---

#### **Code**  
```cpp  
#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;  

void waveSort(vector<int>& arr) {  
    sort(arr.begin(), arr.end());  

    for (int i = 0; i < arr.size() - 1; i += 2) {  
        swap(arr[i], arr[i + 1]);  
    }  
}  

int main() {  
    vector<int> arr = {3, 6, 5, 10, 7, 20};  

    waveSort(arr);  

    for (int num : arr) cout << num << " ";  
    cout << endl;  

    return 0;  
}  
```  

**Output**:  
```
6 3 10 5 20 7  
```  

---

### **4️⃣ Count Inversions** 🚀  

---

#### **Problem**  
Count the number of inversions in an array.  
- An **inversion** is a pair \( (i, j) \) such that \( i < j \) and \( arr[i] > arr[j] \).  

---

#### **Approach**  
Use a modified merge sort to count inversions.  

---

#### **Code**  
```cpp  
#include <iostream>  
#include <vector>  
using namespace std;  

int mergeAndCount(vector<int>& arr, int left, int mid, int right) {  
    vector<int> temp;  
    int i = left, j = mid + 1, count = 0;  

    while (i <= mid && j <= right) {  
        if (arr[i] <= arr[j]) {  
            temp.push_back(arr[i++]);  
        } else {  
            temp.push_back(arr[j++]);  
            count += (mid - i + 1);  // Count inversions  
        }  
    }  

    while (i <= mid) temp.push_back(arr[i++]);  
    while (j <= right) temp.push_back(arr[j++]);  

    for (int k = 0; k < temp.size(); k++)  
        arr[left + k] = temp[k];  

    return count;  
}  

int mergeSortAndCount(vector<int>& arr, int left, int right) {  
    int count = 0;  
    if (left < right) {  
        int mid = left + (right - left) / 2;  

        count += mergeSortAndCount(arr, left, mid);  
        count += mergeSortAndCount(arr, mid + 1, right);  
        count += mergeAndCount(arr, left, mid, right);  
    }  
    return count;  
}  

int main() {  
    vector<int> arr = {8, 4, 2, 1};  

    int inversionCount = mergeSortAndCount(arr, 0, arr.size() - 1);  

    cout << "Number of inversions: " << inversionCount << endl;  

    return 0;  
}  
```  

**Output**:  
```
Number of inversions: 6  
```  

---

### **Key Takeaways**  

1. **Vector and Pair**: Essential STL containers for dynamic storage and pairwise data.  
2. **DNF Sort**: Efficient algorithm to sort arrays of 0s, 1s, and 2s.  
3. **Wave Sort**: Arrange elements in a zigzag pattern.  
4. **Count Inversions**: Solved efficiently using a modified merge sort.  
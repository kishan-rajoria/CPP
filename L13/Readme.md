### **Binary Search Algorithm** 🚀  

---

### **1️⃣ What is Binary Search?**  

Binary Search is an efficient algorithm to search for an element in a **sorted array**. It repeatedly divides the search interval in half, significantly reducing the number of comparisons.  

---

### **2️⃣ Practical Use of Binary Search**  

1. **Searching in Sorted Data**:  
   - Example: Finding a word in a dictionary or a number in a sorted list.  

2. **Optimization Problems**:  
   - Example: Finding the smallest/largest element that satisfies a condition in a sorted range.  

3. **Applications**:  
   - Searching in databases.  
   - Solving problems involving ranges, like finding the square root of a number.  

---

### **3️⃣ Linear Search vs. Binary Search**  

| **Property**       | **Linear Search**           | **Binary Search**                |  
|---------------------|-----------------------------|-----------------------------------|  
| **Applicability**   | Any unsorted or sorted array| Only sorted arrays (ascending/descending) |  
| **Time Complexity** | \( O(n) \)                 | \( O(\log n) \)                  |  
| **Performance**     | Slower for large datasets  | Much faster for large datasets   |  

---

### **4️⃣ Binary Search: Iterative Approach**  

#### **Code**:  
```cpp  
int binarySearch(vector<int> arr, int tar) {  
    int st = 0, end = arr.size() - 1;  

    while (st <= end) {  
        int mid = st + (end - st) / 2;  // Prevents overflow  

        if (tar > arr[mid]) {  
            st = mid + 1;  // Target is in the right half  
        } else if (tar < arr[mid]) {  
            end = mid - 1;  // Target is in the left half  
        } else {  
            return mid;  // Found target  
        }  
    }  

    return -1;  // Target not found  
}  

int main() {  
    vector<int> arr = {-1, 0, 3, 5, 9, 12};  
    int tar = 9;  

    cout << "Index of target: " << binarySearch(arr, tar) << endl;  // Outputs: 4  

    return 0;  
}  
```  

#### **Output Example**  
- **Input**: Array = `[-1, 0, 3, 5, 9, 12]`, Target = `9`.  
- **Output**: Index = `4`.  

---

### **5️⃣ Binary Search: Recursive Approach**  

#### **Code**:  
```cpp  
int binarySearchRecursive(vector<int>& arr, int st, int end, int tar) {  
    if (st > end) return -1;  // Base case: Target not found  

    int mid = st + (end - st) / 2;  // Prevents overflow  

    if (tar == arr[mid]) return mid;  // Found target  
    if (tar > arr[mid]) return binarySearchRecursive(arr, mid + 1, end, tar);  
    return binarySearchRecursive(arr, st, mid - 1, tar);  
}  

int main() {  
    vector<int> arr = {-1, 0, 3, 5, 9, 12};  
    int tar = 0;  

    cout << "Index of target: " << binarySearchRecursive(arr, 0, arr.size() - 1, tar) << endl;  // Outputs: 1  

    return 0;  
}  
```  

---

### **6️⃣ Handling Overflow in Binary Search**  

#### **Issue**  
- Calculating `mid` as:  
  ```cpp  
  int mid = (st + end) / 2;  
  ```  
  This can cause **integer overflow** when `st` and `end` are large.  

#### **Optimized Formula**  
- Instead, calculate `mid` as:  
  ```cpp  
  int mid = st + (end - st) / 2;  
  ```  
  This avoids overflow by subtracting `st` before adding it back.  

---

### **7️⃣ Complexity Analysis**  

1. **Time Complexity**:  
   - The search interval is halved in each step.  
   - Total comparisons: \( \log_2(n) \).  
   \[
   O(\log n)
   \]  

2. **Space Complexity**:  
   - Iterative: \( O(1) \).  
   - Recursive: \( O(\log n) \) (due to recursion stack).  

---

### **8️⃣ Edge Cases**  

1. **Empty Array**:  
   - Input: `arr = []`, `tar = 5`.  
   - Output: `-1`.  

2. **Target Not in Array**:  
   - Input: `arr = [1, 2, 3, 4]`, `tar = 0`.  
   - Output: `-1`.  

3. **Target at Bounds**:  
   - Input: `arr = [1, 2, 3, 4, 5]`, `tar = 5`.  
   - Output: Index = `4`.  

---

### **Key Takeaways**  

1. Binary search is more efficient than linear search for sorted data.  
2. Always use the optimized formula to calculate `mid` to prevent overflow.  
3. Use recursion for a cleaner implementation but keep in mind its higher space complexity.  

---
### **Binary Search: Time Complexity and Recursive Implementation** 🚀  

---

### **1️⃣ Time Complexity of Binary Search**  

Binary search is more efficient than linear search because it reduces the search space by half with each comparison.  

#### **Example: Comparison Between Linear and Binary Search**  
1. **Linear Search**:  
   - For an array with 10 elements, up to 10 operations may be required (in the worst case).  

2. **Binary Search**:  
   - The search space reduces as: \( n, n/2, n/4, n/8, \ldots, 1 \).  
   - For 10 elements, binary search requires \( \lceil \log_2(10) \rceil = 4 \) operations.  

---

#### **Mathematical Derivation**  

- After \( k \) steps, the size of the search space reduces to \( \frac{n}{2^k} \).  
- When the search space becomes 1:  
  \[
  \frac{n}{2^k} = 1
  \]  
- Rearrange:  
  \[
  n = 2^k
  \]  
- Taking the logarithm (base 2) of both sides:  
  \[
  \log_2(n) = k
  \]  

#### **Time Complexity**  
- Binary search requires \( k = \log_2(n) \) comparisons.  
- Therefore:  
  \[
  \text{Time Complexity} = O(\log n)
  \]  

---

### **2️⃣ Recursive Implementation of Binary Search**  

#### **Key Idea**  
Binary search can also be implemented recursively by repeatedly dividing the array into smaller halves until the target element is found.  

---

#### **Recursive Code**  

```cpp  
#include <iostream>  
#include <vector>  
using namespace std;  

int binarySearchRecursive(vector<int>& arr, int st, int end, int tar) {  
    if (st > end) return -1;  // Base case: Target not found  

    int mid = st + (end - st) / 2;  // Calculate mid to prevent overflow  

    if (arr[mid] == tar) return mid;  // Found target  
    if (arr[mid] < tar)  
        return binarySearchRecursive(arr, mid + 1, end, tar);  // Search right half  
    return binarySearchRecursive(arr, st, mid - 1, tar);  // Search left half  
}  

int main() {  
    vector<int> arr = {-1, 0, 3, 5, 9, 12};  
    int tar = 9;  

    int result = binarySearchRecursive(arr, 0, arr.size() - 1, tar);  
    if (result != -1)  
        cout << "Target found at index: " << result << endl;  
    else  
        cout << "Target not found" << endl;  

    return 0;  
}  
```  

---

#### **Explanation**  

1. **Base Case**:  
   - If \( st > end \), the target element is not in the array.  

2. **Recursive Calls**:  
   - If the target is greater than `arr[mid]`, recursively search in the right half.  
   - If the target is less than `arr[mid]`, recursively search in the left half.  

---

#### **Complexity Analysis**  

1. **Time Complexity**:  
   - The array is divided in half with each recursive call.  
   \[
   O(\log n)
   \]  

2. **Space Complexity**:  
   - Each recursive call adds a frame to the call stack.  
   - The maximum depth of the recursion tree is \( \log_2(n) \).  
   \[
   O(\log n)
   \]  

---

### **3️⃣ Comparison: Iterative vs Recursive Binary Search**  

| **Aspect**            | **Iterative**                     | **Recursive**                     |  
|------------------------|------------------------------------|------------------------------------|  
| **Implementation**     | Uses loops for iteration.         | Uses function calls.               |  
| **Time Complexity**    | \( O(\log n) \)                   | \( O(\log n) \)                   |  
| **Space Complexity**   | \( O(1) \) (no stack usage)       | \( O(\log n) \) (stack usage)      |  
| **Use Case**           | Preferred for memory efficiency.  | Preferred for cleaner code.        |  

---

### **4️⃣ Example with Recursive Binary Search**  

#### **Input**:  
Array = `[-1, 0, 3, 5, 9, 12]`, Target = `9`.  

#### **Execution Steps**:  

1. **Initial Call**:  
   - \( st = 0, end = 5, mid = 2 \).  
   - \( arr[mid] = 3 \), \( tar > arr[mid] \).  
   - Recursive call on \( [5, 9, 12] \).  

2. **Second Call**:  
   - \( st = 3, end = 5, mid = 4 \).  
   - \( arr[mid] = 9 \), \( tar = arr[mid] \).  
   - Return \( 4 \).  

#### **Output**:  
```
Target found at index: 4
```  

---

### **Key Takeaways**  

1. Binary search reduces the problem size logarithmically, making it far more efficient than linear search.  
2. Recursive binary search is elegant but consumes more memory due to the call stack.  
3. Always handle overflow while calculating `mid` using \( \text{mid} = \text{st} + (\text{end} - \text{st}) / 2 \).  

## outputs

![alt text](image.png)
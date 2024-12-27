### **Time and Space Complexity in C++ DSA** 🚀  

Understanding **time complexity** and **space complexity** is crucial to analyzing the efficiency of algorithms. Here's a comprehensive explanation with diagrams, examples, and detailed breakdowns.  

### **Time Complexity** 🚀  

---

### **What is Time Complexity?**  
- **Definition**: Time complexity measures the number of operations an algorithm performs as a function of input size (\( n \)), not the actual time in seconds.  
- The same code may run faster or slower on different systems (Windows, Linux, macOS), but the **time complexity remains constant**.  
- It helps us predict the performance of an algorithm as \( n \) grows.  

---

### **Key Points**  
1. **Measured in operations**: Instead of seconds, we count how many steps the algorithm performs.  
2. **Impact of Input Size**: As \( n \) increases, the number of operations increases.  
3. **Worst-Case Scenario**: Time complexity typically considers the **worst-case input** to ensure robustness for large data.  

---

### **Graph Representation**  
- **Y-axis**: Number of operations.  
- **X-axis**: Input size (\( n \)).  
- For a **linear algorithm** (\( O(n) \)):  
  \[
  y = x \quad \text{or} \quad f(n) = n
  \]  

---

### **Example Plot**  

| Input Size (\( n \)) | 1 | 2 | 3 | 4 | 5 |  
|-----------------------|---|---|---|---|---|  
| Operations (\( y \))  | 1 | 2 | 3 | 4 | 5 |  

**Graph for \( O(n) \):**  
```
Operations (y)
|    
|        *
|      *  
|    *    
|  *        
|*___________________ Input Size (n)
```

---

### **Big-O Notation**  
- **Definition**: Big-O notation describes the **upper bound** or **worst-case scenario** for an algorithm's performance.  
- **Focus on Dominant Term**: Ignore constants and lower-order terms to simplify the representation.  

---

### **Example**  
Given \( f(n) = 4n^2 + 3n + 5 \):  
1. **Ignore constants**: \( 4, 3, 5 \).  
2. Focus on the highest-order term: \( n^2 \).  
3. Time complexity:  
   \[
   O(n^2)
   \]  

---

### **Key Terms**  

1. **Big-O (\( O \))**: Represents the **upper bound** or **worst-case scenario**.  
2. **Theta (\( \Theta \))**: Represents the **average-case performance**.  
3. **Omega (\( \Omega \))**: Represents the **lower bound** or **best-case performance**.  

---

### **Points to Remember**  

- Time complexity evaluates the **growth rate** of an algorithm as input size increases.  
- The worst-case scenario ensures algorithms can handle large inputs effectively.  
- Focus on dominant terms while ignoring constants for Big-O notation.  
  

---
### **Space Complexity** 🚀  

---

### **What is Space Complexity?**  
- **Definition**: Space complexity measures the amount of memory used by an algorithm as a function of input size (\( n \)).  
- It includes:  
  1. **Input space**: Memory to store the input (e.g., arrays, vectors, strings).  
  2. **Auxiliary space**: Temporary or additional memory used during computation (e.g., recursion stack, temporary variables).  
- **Note**: Input space is generally **not counted** in space complexity calculations.  

---

### **Examples of Space Complexity**  

#### **1️⃣ Input Space Example:**  
Code to store a vector of integers:  
```cpp  
vector<int> nums = {1, 2, 3, 4, 5};  
```  
- **Input space**: \( O(n) \), where \( n \) is the number of elements in the vector.  

#### **2️⃣ Auxiliary Space Example:**  
Code using recursion:  
```cpp  
int factorial(int n) {  
    if (n == 0) return 1;  
    return n * factorial(n - 1);  
}  
```  
- **Auxiliary space**: The memory used by the recursion stack is proportional to the depth of recursive calls (\( O(n) \)).  

---

### **Graph Representation for \( O(1) \): Constant Space**  

- **Definition**: Algorithms that use a fixed amount of memory, regardless of the input size, have a space complexity of \( O(1) \).  
- **Examples**: Swapping two variables, finding the maximum element in an array without additional data structures.  

**Graph:**  
| Input Size (\( n \)) | 1   | 10  | 100 | 1000 | 10,000 |  
|-----------------------|-----|-----|-----|------|--------|  
| Space Usage (\( y \)) | 1   | 1   | 1   | 1    | 1      |  

**Graph for \( O(1) \):**  
```
Space Usage (y)
|
|      * * * * *
|___________________ Input Size (n)
```  

---

### **Common Time Complexities and Comparisons**  

| **Time Complexity** | **Type**            | **Example Algorithms**                     |  
|----------------------|---------------------|--------------------------------------------|  
| \( O(1) \)           | Constant Time       | Accessing an element in an array           |  
| \( O(\log n) \)      | Logarithmic Time    | Binary search                              |  
| \( O(n) \)           | Linear Time         | Linear search                              |  
| \( O(n \log n) \)    | Log-linear Time     | Merge sort, quicksort                      |  
| \( O(n^2) \)         | Quadratic Time      | Bubble sort, insertion sort                |  
| \( O(n^3) \)         | Cubic Time          | Matrix multiplication                      |  
| \( O(2^n) \)         | Exponential Time    | Recursive Fibonacci, subset problems       |  
| \( O(n!) \)          | Factorial Time      | N-queens, string permutations              |  

---

### **Comparison Graph**  

| Input Size (\( n \)) | \( O(1) \) | \( O(\log n) \) | \( O(n) \) | \( O(n \log n) \) | \( O(n^2) \) | \( O(2^n) \) | \( O(n!) \) |  
|-----------------------|-----------|-----------------|------------|-------------------|--------------|--------------|------------|  
| 1                    | 1         | 0               | 1          | 0                 | 1            | 2            | 1          |  
| 5                    | 1         | 2               | 5          | 11                | 25           | 32           | 120        |  
| 10                   | 1         | 3               | 10         | 33                | 100          | 1024         | 3,628,800  |  

---

**Graph Shape:**  
1. \( O(1) \): Flat line.  
2. \( O(\log n) \): Slowly increasing curve.  
3. \( O(n) \): Straight diagonal line.  
4. \( O(n \log n) \): Steeper diagonal curve.  
5. \( O(n^2) \): Parabolic curve.  
6. \( O(2^n) \): Exponentially steep curve.  
7. \( O(n!) \): Extremely steep curve (factorial growth).  

---

### **Key Takeaways**  
- \( O(1) \) is the most efficient, using constant space.  
- Algorithms with \( O(\log n) \), \( O(n) \), or \( O(n \log n) \) are generally suitable for large datasets.  
- Avoid algorithms with \( O(2^n) \) or \( O(n!) \) for large inputs unless absolutely necessary.  

---
### **Time Complexity Examples: Simplified for Teaching** 🚀  

Let’s break down common time complexities with clear explanations, examples, and diagrams to make it easy to understand and teach.

---

### **1️⃣ Constant Time Complexity: \( O(1) \)**  
**Example**: Sum of Numbers from 1 to \( N \).  

**Code**:  
```cpp  
int n;  
cin >> n;  
int ans = n * (n + 1) / 2;  
```  
**Explanation**:  
- The formula runs in constant time regardless of \( n \).  
- Only a few basic operations are performed.  

**Time Complexity**: \( O(1) \).  

---

### **2️⃣ Linear Time Complexity: \( O(n) \)**  
**Examples**:  

#### **Factorial Calculation**  
**Code**:  
```cpp  
int fact = 1;  
for (int i = 1; i <= n; i++) {  
    fact *= i;  
}  
```  
**Explanation**:  
- The loop runs \( n \) times.  
- Each iteration performs one multiplication.  

**Time Complexity**: \( O(n) \).  

#### **Kadane's Algorithm**  
Used to find the maximum subarray sum.  

**Time Complexity**: \( O(n) \).  

#### **Nth Fibonacci Number (Dynamic Programming)**  
**Explanation**:  
- Using **memoization or tabulation**, the Fibonacci sequence can be computed efficiently.  
- Each number is computed only once.  

**Time Complexity**: \( O(n) \).  

---

### **3️⃣ Quadratic Time Complexity: \( O(n^2) \)**  
**Examples**:  

#### **Bubble Sort**  
**Code**:  
```cpp  
for (int i = 0; i < n; i++) {  
    for (int j = 0; j < n - i - 1; j++) {  
        if (arr[j] > arr[j + 1]) {  
            swap(arr[j], arr[j + 1]);  
        }  
    }  
}  
```  
**Explanation**:  
- Two nested loops iterate over the array.  
- For each element, comparisons and swaps are performed.  

**Time Complexity**: \( O(n^2) \).  

#### **Cubic Time Complexity: \( O(n^3) \)**  
Occurs in matrix multiplication algorithms or three nested loops.  

---

### **4️⃣ Logarithmic Time Complexity: \( O(\log n) \)**  
**Example**: Binary Search  

**Code**:  
```cpp  
int binarySearch(vector<int>& arr, int target) {  
    int low = 0, high = arr.size() - 1;  
    while (low <= high) {  
        int mid = low + (high - low) / 2;  
        if (arr[mid] == target)  
            return mid;  
        else if (arr[mid] < target)  
            low = mid + 1;  
        else  
            high = mid - 1;  
    }  
    return -1;  
}  
```  
**Explanation**:  
- The search space is halved in every iteration.  
- Efficient for large datasets.  

**Time Complexity**: \( O(\log n) \).  

---

### **5️⃣ Log-Linear Time Complexity: \( O(n \log n) \)**  
**Examples**:  

#### **Merge Sort**  
**Code**:  
```cpp  
void mergeSort(vector<int>& arr, int left, int right) {  
    if (left >= right) return;  
    int mid = left + (right - left) / 2;  
    mergeSort(arr, left, mid);  
    mergeSort(arr, mid + 1, right);  
    merge(arr, left, mid, right);  
}  
```  
**Explanation**:  
- The array is repeatedly divided into halves (\( O(\log n) \)).  
- Merging takes \( O(n) \).  

**Time Complexity**: \( O(n \log n) \).  

#### **Quick Sort**  
Similar to merge sort, but partitioning replaces merging.  

---

### **6️⃣ Exponential Time Complexity: \( O(2^n) \)**  
**Examples**:  

#### **Recursive Fibonacci**  
**Code**:  
```cpp  
int fibonacci(int n) {  
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}  
```  
**Explanation**:  
- Each function call creates two more calls.  
- The recursion tree grows exponentially.  

**Time Complexity**: \( O(2^n) \).  

---

### **7️⃣ Factorial Time Complexity: \( O(n!) \)**  
**Examples**:  

#### **N-Queens Problem**  
**Explanation**:  
- The algorithm generates all possible board configurations (\( O(n!) \)).  

#### **All Possible Permutations of a String**  
**Code**:  
```cpp  
void permute(string s, int l, int r) {  
    if (l == r) {  
        cout << s << endl;  
        return;  
    }  
    for (int i = l; i <= r; i++) {  
        swap(s[l], s[i]);  
        permute(s, l + 1, r);  
        swap(s[l], s[i]);  
    }  
}  
```  
**Time Complexity**: \( O(n!) \).  

---

### **Visual Comparisons of Time Complexities**  

| **Complexity** | **Graph Shape**               | **Examples**                          |  
|----------------|-------------------------------|----------------------------------------|  
| \( O(1) \)     | Horizontal line               | Accessing an element in an array      |  
| \( O(\log n) \)| Slowly increasing curve       | Binary Search                         |  
| \( O(n) \)     | Diagonal line                | Linear Search, Kadane’s Algorithm     |  
| \( O(n^2) \)   | Parabolic curve               | Bubble Sort                           |  
| \( O(2^n) \)   | Exponentially steep curve     | Recursive Fibonacci                   |  
| \( O(n!) \)    | Extremely steep factorial curve | N-Queens Problem, Permutations       |  

---

### **Key Takeaways**  
1. Time complexity helps evaluate algorithm efficiency.  
2. Understand the context to choose the right algorithm.  
3. Optimize solutions for large inputs by focusing on \( O(\log n) \), \( O(n) \), or \( O(n \log n) \) complexities.  


### **Prime Numbers: Time Complexity Analysis** 🚀  

---

#### **Problem: Check if a Number is Prime**  
A prime number is a number greater than 1 that is divisible only by 1 and itself.  

---

#### **1️⃣ Brute Force Approach**  

**Code**:  
```cpp  
bool isPrime(int n) {  
    if (n <= 1) return false;  
    for (int i = 2; i < n; i++) {  
        if (n % i == 0) return false;  
    }  
    return true;  
}  
```  

**Time Complexity**:  
- The loop runs \( n - 2 \) times for a number \( n \).  
- Complexity: \( O(n) \).  

---

#### **2️⃣ Optimized Approach: Check Divisors Up to \( \sqrt{n} \)**  

**Code**:  
```cpp  
bool isPrime(int n) {  
    if (n <= 1) return false;  
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }  
    return true;  
}  
```  

**Explanation**:  
- If a number \( n \) has a divisor greater than \( \sqrt{n} \), the corresponding smaller divisor must be less than \( \sqrt{n} \).  
- We only check divisors up to \( \sqrt{n} \).  

**Time Complexity**:  
- The loop runs up to \( \sqrt{n} \).  
- Complexity: \( O(\sqrt{n}) \).  

---

#### **Comparison: \( O(\sqrt{n}) \) vs \( O(n) \)**  
- **\( O(\sqrt{n}) \) is better**: For large values of \( n \), \( \sqrt{n} \) grows much slower than \( n \).  

---

### **Comparison: \( O(\sqrt{n}) \) vs \( O(\log n) \)**  
- **\( O(\log n) \) is better**:  
  - \( O(\sqrt{n}) \): The growth rate depends on the square root of the input size.  
  - \( O(\log n) \): The growth rate depends on the logarithm of the input size, which grows much slower than \( \sqrt{n} \).  
- **Use Case**:  
  - \( O(\sqrt{n}) \): Applicable for problems requiring divisor checks.  
  - \( O(\log n) \): Used in algorithms like binary search.  

---

### **Selection Sort: Time Complexity**  

#### **Algorithm**  
1. Divide the array into two parts: sorted and unsorted.  
2. Find the smallest element in the unsorted part and swap it with the first element of the unsorted part.  
3. Repeat until the array is sorted.  

**Code**:  
```cpp  
void selectionSort(vector<int>& arr) {  
    int n = arr.size();  
    for (int i = 0; i < n - 1; i++) {  
        int minIndex = i;  
        for (int j = i + 1; j < n; j++) {  
            if (arr[j] < arr[minIndex])  
                minIndex = j;  
        }  
        swap(arr[i], arr[minIndex]);  
    }  
}  
```  

**Time Complexity**:  
- Outer loop runs \( n - 1 \) times.  
- Inner loop runs \( n - i - 1 \) times for each \( i \).  
- Total comparisons:  
  \[
  (n - 1) + (n - 2) + ... + 1 = \frac{n(n-1)}{2}
  \]  
- Complexity: \( O(n^2) \).  

**Space Complexity**:  
- Uses constant space for variables: \( O(1) \).  

---

### **Summary**  

| **Problem/Algorithm**       | **Time Complexity** | **Explanation**                                  |  
|------------------------------|---------------------|------------------------------------------------|  
| Check Prime (Brute Force)    | \( O(n) \)         | Check all divisors up to \( n \).              |  
| Check Prime (\( \sqrt{n} \)) | \( O(\sqrt{n}) \)  | Only check divisors up to \( \sqrt{n} \).      |  
| Selection Sort               | \( O(n^2) \)       | Two nested loops for finding the minimum.      |  
| \( O(\sqrt{n}) \) vs \( O(n) \) | \( O(\sqrt{n}) \) is better | Faster for large inputs.                     |  
| \( O(\sqrt{n}) \) vs \( O(\log n) \) | \( O(\log n) \) is better | \( O(\log n) \) grows slower than \( O(\sqrt{n}) \). |  

### **Recursion: Time Complexity** 🚀  

Recursion is a technique where a function calls itself to solve a smaller version of the original problem. Understanding its time complexity is critical for analyzing performance.  

---

### **1️⃣ Time Complexity of Recursion**  

#### **Recurrence Relation**  
- A recurrence relation expresses the relationship between the current function call and subsequent recursive calls.  
- Example: \( f(n) = k + f(n-1) \)  
  - **\( k \)**: The work done in each recursive call (e.g., basic operations).  
  - **\( f(n-1) \)**: The recursive call to process the smaller problem.  

---

#### **Breaking Down the Recurrence Relation**  
Given \( f(n) = k + f(n-1) \):  
- \( f(n-1) = k + f(n-2) \)  
- \( f(n-2) = k + f(n-3) \)  
- ...  
- \( f(1) = k + f(0) \).  

Adding these equations:  
\[
f(n) = k \cdot n + f(0)
\]  

- \( f(0) \) is typically constant (base case).  
- Simplified:  
\[
f(n) = k \cdot n + k_2
\]  

**Time Complexity**: \( O(n) \).  

---

### **2️⃣ Recursion Tree**  

#### **Example: Factorial Calculation**  

**Code**:  
```cpp  
int factorial(int n) {  
    if (n <= 1) return 1;  
    return n * factorial(n - 1);  
}  
```  

---

#### **Recursion Tree Visualization**  
For \( n = 4 \):  
```
factorial(4)
|
|--> 4 * factorial(3)
      |
      |--> 3 * factorial(2)
            |
            |--> 2 * factorial(1)
                  |
                  |--> 1 (Base Case)
```  

---

#### **Total Number of Recursive Calls**  
- The depth of the recursion tree is \( n \).  
- Each level performs \( O(1) \) work.  

**Time Complexity**:  
\[
T(n) = \text{Number of recursive calls} \cdot \text{Work in each call} = O(n)
\]  

---

### **Key Points About Recursive Time Complexity**  

1. **Base Case**: Determines when recursion stops.  
2. **Recurrence Relation**: Describes the relationship between recursive calls.  
3. **Work in Each Call**: Includes any computation performed outside of recursive calls.  
4. **Recursion Tree**: A visualization tool to break down the recursive process.  

---

### **Space Complexity in Recursion** 🚀  

---

### **Understanding Space Complexity in Recursion**  

#### **Call Stack in Recursion**  
- **Call Stack**: Each recursive call adds a frame to the call stack, which includes:  
  1. Parameters passed to the function.  
  2. Local variables of the function.  
  3. Return address for the caller function.  

---

#### **Formula for Space Complexity**  
1. **Space Complexity (\( SC \)):**  
   - \( SC = \text{Depth of Recursion Tree} \times \text{Memory per Call} \).  
   - For \( n \) recursive calls, if each call uses \( k \) units of memory:  
     \[
     SC = n \times k \quad \text{or simply } SC = O(n).
     \]  

2. **Key Points**:  
   - **Depth of Recursion Tree**: The maximum number of nested calls (height of the recursion tree).  
   - **Memory per Call**: Space occupied by local variables and parameters.  

---

### **Example: Recursive Fibonacci**  

#### **Code**:  
```cpp  
int fibonacci(int n) {  
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}  
```  

#### **Visualization (Recursion Tree)**: For \( n = 4 \):  
```
fibonacci(4)
|
|--> fibonacci(3) + fibonacci(2)
      |
      |--> fibonacci(2) + fibonacci(1)    fibonacci(2)
            |                                 |
            |--> fibonacci(1) + fibonacci(0) |--> fibonacci(1) + fibonacci(0)
```

#### **Time Complexity Analysis**  
- Each recursive call splits into two more calls.  
- The total number of calls is proportional to the Fibonacci series.  
- Using the sum of a geometric series:  
  \[
  T(n) = 2^n
  \]  
- **Golden Ratio**:  
  The number of calls grows as \( O(\phi^n) \), where \( \phi = 1.168 \) (golden ratio).  

**Time Complexity**: \( O(2^n) \).  

---

#### **Space Complexity Analysis**  
- The depth of the recursion tree is \( n \).  
- Each call stack stores local variables and function state.  

**Space Complexity**: \( O(n) \).  

---

### **Key Points**  
1. Recursive Fibonacci has high time complexity (\( O(2^n) \)) due to redundant calculations.  
2. Space complexity (\( O(n) \)) arises from the depth of the recursion tree.  
3. Use **dynamic programming** (memoization) to optimize Fibonacci calculations, reducing \( TC \) to \( O(n) \) and \( SC \) to \( O(n) \).  

# Merge Sort Algorithm in C++

## Overview
Merge Sort is a divide-and-conquer algorithm for sorting arrays. It works by recursively splitting the array into two halves, sorting them, and then merging them back together in sorted order.

## Time Complexity
The time complexity of Merge Sort is:
- **O(n log n)** for large inputs.  
- The time complexity is derived from the total number of recursive calls multiplied by the work done in each call.

### Breakdown:
- **Total Recursive Calls:** O(log n)
- **Work Done per Call:** O(n) (because of merging)

Thus, overall: **O(n log n)**.

## Space Complexity
Merge Sort requires additional space for merging two sorted halves, resulting in a space complexity of:
- **O(n)** at worst.

## Practical Usage
The performance of Merge Sort varies depending on the input size:

- **For n > 10^8** (Large Input): O(log n) time, O(1) space.
- **For n <= 10^8** (Medium Input): O(n) time complexity.
- **For n <= 10^6** (Smaller Input): O(n log n) time complexity.

For very small inputs (n <= 12), Merge Sort may be less efficient than simpler algorithms like Insertion Sort due to overhead.

## References
- *Cormen, Leiserson, Rivest, Stein, "Introduction to Algorithms"*
- *Master's Theorem* for solving recurrence relations.


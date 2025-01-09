### **Recursion: Definition and Basics** 🚀  

---

### **What is Recursion?**  

**Recursion** is a programming technique where a function calls itself to solve smaller instances of the same problem. It is commonly used to solve problems that can be broken down into smaller, repetitive subproblems.

---

### **Components of Recursion**  

1. **Base Case**:  
   - The condition under which the recursion stops.  
   - Prevents infinite recursion.  

2. **Recursive Case**:  
   - The logic where the function calls itself with a smaller problem.  

---

### **Structure of a Recursive Function**  

```cpp  
void recursionFunction() {  
    // Base case: Stops recursion  
    if (someCondition) return;  

    // Recursive case: Calls itself  
    recursionFunction();  
}  
```  

---

### **Advantages of Recursion**  

1. **Simpler Code**: Often more intuitive for problems like tree traversal, Fibonacci sequence, etc.  
2. **Breaks Down Complex Problems**: Suitable for divide-and-conquer strategies.  

---

### **Disadvantages of Recursion**  

1. **High Space Complexity**: Uses call stack for each recursive call.  
2. **Can Cause Stack Overflow**: If the base case is missing or the problem size is too large.  

---

### **7 Best Problems on Recursion**  

---

#### **1️⃣ Factorial of a Number**  
**Problem**: Find the factorial of \( n \).  
**Code**:  
```cpp  
int factorial(int n) {  
    if (n == 0) return 1;  // Base case  
    return n * factorial(n - 1);  // Recursive case  
}  
```  

---

#### **2️⃣ Fibonacci Sequence**  
**Problem**: Find the \( n^{th} \) Fibonacci number.  
**Code**:  
```cpp  
int fibonacci(int n) {  
    if (n <= 1) return n;  // Base case  
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case  
}  
```  

---

#### **3️⃣ Sum of Digits**  
**Problem**: Find the sum of the digits of a number.  
**Code**:  
```cpp  
int sumOfDigits(int n) {  
    if (n == 0) return 0;  // Base case  
    return n % 10 + sumOfDigits(n / 10);  // Recursive case  
}  
```  

---

#### **4️⃣ Reverse a String**  
**Problem**: Reverse a string using recursion.  
**Code**:  
```cpp  
void reverseString(string& s, int start, int end) {  
    if (start >= end) return;  // Base case  
    swap(s[start], s[end]);  
    reverseString(s, start + 1, end - 1);  // Recursive case  
}  
```  

---

#### **5️⃣ Check Palindrome**  
**Problem**: Check if a string is a palindrome using recursion.  
**Code**:  
```cpp  
bool isPalindrome(string& s, int start, int end) {  
    if (start >= end) return true;  // Base case  
    return (s[start] == s[end]) && isPalindrome(s, start + 1, end - 1);  // Recursive case  
}  
```  

---

#### **6️⃣ Tower of Hanoi**  
**Problem**: Solve the Tower of Hanoi for \( n \) disks.  
**Code**:  
```cpp  
void towerOfHanoi(int n, char src, char dest, char aux) {  
    if (n == 0) return;  // Base case  

    towerOfHanoi(n - 1, src, aux, dest);  
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;  
    towerOfHanoi(n - 1, aux, dest, src);  
}  
```  

---

#### **7️⃣ Binary Search Using Recursion**  
**Problem**: Implement binary search recursively.  
**Code**:  
```cpp  
int binarySearch(vector<int>& arr, int start, int end, int target) {  
    if (start > end) return -1;  // Base case  

    int mid = start + (end - start) / 2;  

    if (arr[mid] == target) return mid;  
    if (arr[mid] > target) return binarySearch(arr, start, mid - 1, target);  
    return binarySearch(arr, mid + 1, end, target);  
}  
```  

---

### **Advanced Recursion Problems**  

---

#### **1️⃣ Permutations of a String/Array**  
**Problem**: Generate all permutations of a string or array.  
**Code**:  
```cpp  
void permute(string s, int start, int end) {  
    if (start == end) {  
        cout << s << endl;  
        return;  
    }  
    for (int i = start; i <= end; i++) {  
        swap(s[start], s[i]);  
        permute(s, start + 1, end);  
        swap(s[start], s[i]);  // Backtrack  
    }  
}  
```  

---

#### **2️⃣ Subsets of an Array**  
**Problem**: Generate all subsets of an array.  
**Code**:  
```cpp  
void subsets(vector<int>& nums, vector<int>& current, int index) {  
    if (index == nums.size()) {  
        for (int num : current) cout << num << " ";  
        cout << endl;  
        return;  
    }  
    current.push_back(nums[index]);  
    subsets(nums, current, index + 1);  
    current.pop_back();  
    subsets(nums, current, index + 1);  
}  
```  

---

#### **3️⃣ N-Queens Problem**  
**Problem**: Place \( n \) queens on an \( n \times n \) chessboard so that no two queens threaten each other.  

---

#### **4️⃣ Merge Sort**  
**Problem**: Sort an array using the divide-and-conquer approach with recursion.  

---

#### **5️⃣ Word Search in Grid**  
**Problem**: Search for a word in a 2D grid using recursion.  

---

### **Key Takeaways**  

1. Understand the **base case** and **recursive case** clearly.  
2. Optimize recursive problems using **memoization** (dynamic programming) for overlapping subproblems.  
3. Advanced problems often combine recursion with backtracking. 
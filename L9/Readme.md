### **Kadane's Algorithm in C++** 🚀  

Kadane's Algorithm is an efficient way to solve the **Maximum Subarray Sum** problem. It optimizes the process of finding the subarray with the largest sum in a given array, reducing the time complexity to \( O(n) \).  

---

### **What is a Subarray?**  
- A **subarray** is a contiguous part of an array.  
- Example: For an array `1, 2, 3, 4, 5`, possible subarrays include:  
  - `1`, `12`, `123`, `1234`, `12345`, etc.  

**Formula:**  
The total number of subarrays in an array of size \( n \) is:  
\[ n \times (n + 1) / 2 \]  

**Example:**  
For an array of size `5`, the total number of subarrays is:  
\[ 5 \times (5 + 1) / 2 = 15 \]  

---

### **Approach to Solve the Problem**  

#### **1️⃣ Brute Force Approach (\( O(n^3) \)):**  
- Iterate through all possible start and end points of subarrays.  
- Calculate the sum for each subarray and keep track of the maximum.  

**Code Example:**  
```cpp  
int maxSubArrayBrute(int arr[], int n) {  
    int maxSum = INT_MIN;  
    for (int i = 0; i < n; i++) {  
        for (int j = i; j < n; j++) {  
            int currentSum = 0;  
            for (int k = i; k <= j; k++) {  
                currentSum += arr[k];  
            }  
            maxSum = max(maxSum, currentSum);  
        }  
    }  
    return maxSum;  
}  
```  

---

#### **2️⃣ Optimized Brute Force (\( O(n^2) \)):**  
- Observe that the sum for subarrays with the same start point can be reused.  
- Eliminate the innermost loop.  

**Code Example:**  
```cpp  
int maxSubArrayOptimized(int arr[], int n) {  
    int maxSum = INT_MIN;  
    for (int i = 0; i < n; i++) {  
        int currentSum = 0;  
        for (int j = i; j < n; j++) {  
            currentSum += arr[j];  
            maxSum = max(maxSum, currentSum);  
        }  
    }  
    return maxSum;  
}  
```  

---

#### **3️⃣ Kadane's Algorithm (\( O(n) \)):**  
Kadane's Algorithm is the most optimized solution.  

**Key Intuition:**  
- If the sum of a subarray becomes negative, reset it to `0`.  
- Track the maximum sum encountered so far.  

**Steps:**  
1. Start with `currentSum = 0` and `maxSum = INT_MIN`.  
2. Traverse the array and add elements to `currentSum`.  
3. If `currentSum` becomes negative, reset it to `0`.  
4. Update `maxSum` with the maximum of `currentSum` and `maxSum`.  

**Code Example:**  
```cpp  
int maxSubArrayKadane(int arr[], int n) {  
    int maxSum = INT_MIN;  
    int currentSum = 0;  

    for (int i = 0; i < n; i++) {  
        currentSum += arr[i];  
        if (currentSum > maxSum) {  
            maxSum = currentSum;  
        }  
        if (currentSum < 0) {  
            currentSum = 0;  
        }  
    }  
    return maxSum;  
}  
```  

---

### **LeetCode Problem**  
[Maximum Subarray - LeetCode](https://leetcode.com/problems/maximum-subarray/)  

**Example Input:**  
Array: `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`  

**Expected Output:**  
`6` (Subarray: `[4, -1, 2, 1]`)  

**Code Example:**  
```cpp  
#include <iostream>  
#include <vector>  
#include <climits>  
using namespace std;  

int maxSubArray(vector<int>& nums) {  
    int maxSum = INT_MIN, currentSum = 0;  

    for (int num : nums) {  
        currentSum += num;  
        maxSum = max(maxSum, currentSum);  
        if (currentSum < 0) {  
            currentSum = 0;  
        }  
    }  
    return maxSum;  
}  

int main() {  
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;  // Outputs: 6  
    return 0;  
}  
```  

---

### **Comparison of Approaches**  

| **Approach**            | **Time Complexity** | **Space Complexity** |  
|--------------------------|---------------------|-----------------------|  
| Brute Force              | \( O(n^3) \)       | \( O(1) \)            |  
| Optimized Brute Force    | \( O(n^2) \)       | \( O(1) \)            |  
| Kadane's Algorithm       | \( O(n) \)         | \( O(1) \)            |  

---

### **Key Takeaways**  
- Kadane's Algorithm is the most efficient solution for the Maximum Subarray Sum problem.  
- Always analyze the time complexity of your approach and strive for optimization.  
- Subarrays are a foundational concept in solving many array-based problems.  

### **outputs** <br>
<table>
  <tr>
    <td><img src="image.png"
     
Happy Coding! 😊✨  
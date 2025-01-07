### **Inclusion-Exclusion Principle in C++** 🚀  

---

### **What is the Inclusion-Exclusion Principle?**  

The **Inclusion-Exclusion Principle** is a mathematical method used to count the size of the union of multiple sets by adding and subtracting the sizes of their intersections.  

#### **Formula**:  
For two sets \( A \) and \( B \):  
\[
|A \cup B| = |A| + |B| - |A \cap B|
\]  

For three sets \( A \), \( B \), and \( C \):  
\[
|A \cup B \cup C| = |A| + |B| + |C| - |A \cap B| - |B \cap C| - |C \cap A| + |A \cap B \cap C|
\]  

---

### **Example: Count Multiples Using Inclusion-Exclusion**  

#### Problem:  
Find the count of numbers less than \( n \) that are divisible by \( a \), \( b \), or \( c \).  

---

#### **Code**:  
```cpp  
#include <iostream>  
using namespace std;  

int countMultiples(int n, int a, int b, int c) {  
    // Count of multiples of a, b, c  
    int countA = n / a;  
    int countB = n / b;  
    int countC = n / c;  

    // Count of multiples of pairs of (a, b), (b, c), (c, a)  
    int countAB = n / (lcm(a, b));  
    int countBC = n / (lcm(b, c));  
    int countCA = n / (lcm(c, a));  

    // Count of multiples of (a, b, c)  
    int countABC = n / (lcm(a, lcm(b, c)));  

    // Inclusion-Exclusion Formula  
    return countA + countB + countC - countAB - countBC - countCA + countABC;  
}  

int main() {  
    int n = 100;  // Numbers less than 100  
    int a = 2, b = 3, c = 5;  

    cout << "Count of numbers divisible by 2, 3, or 5: " << countMultiples(n, a, b, c) << endl;  
    return 0;  
}  
```  

---

#### **Output**:  
```
Count of numbers divisible by 2, 3, or 5: 74
```  

---

### **GCD (Greatest Common Divisor) in C++**  

#### **What is GCD?**  
The **GCD** of two integers is the largest integer that divides both numbers without leaving a remainder.  

---

### **Approach 1: Using the Built-In Function**  

C++ provides a built-in `std::gcd` function (available in C++17 and later).  

#### **Code**:  
```cpp  
#include <iostream>  
#include <numeric>  // For std::gcd  
using namespace std;  

int main() {  
    int a = 56, b = 98;  
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;  
    return 0;  
}  
```  

#### **Output**:  
```
GCD of 56 and 98 is: 14
```  

---

### **Approach 2: Using the Euclidean Algorithm**  

#### **Algorithm**:  
1. If \( b = 0 \), return \( a \).  
2. Otherwise, calculate \( \text{GCD}(a, b) = \text{GCD}(b, a \% b) \).  

---

#### **Code**:  
```cpp  
#include <iostream>  
using namespace std;  

int gcd(int a, int b) {  
    while (b != 0) {  
        int temp = b;  
        b = a % b;  
        a = temp;  
    }  
    return a;  
}  

int main() {  
    int a = 56, b = 98;  
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;  
    return 0;  
}  
```  

#### **Output**:  
```
GCD of 56 and 98 is: 14
```  

---

### **Applications of GCD**  

1. Simplifying fractions.  
2. Solving Diophantine equations.  
3. Inclusion-Exclusion principle (finding intersections using LCM).  

---

### **Key Takeaways**  

1. **Inclusion-Exclusion Principle**: Useful for counting in overlapping sets.  
2. **GCD**: Fundamental in number theory and arithmetic operations.  
3. Use `std::gcd` for simplicity in C++17 and later.  

### **Sieve of Eratosthenes** 🚀  

The Sieve of Eratosthenes is an efficient algorithm for finding all prime numbers up to a given number \( n \).  

---

### **How It Works**  

1. **Key Idea**:  
   - A prime number has no divisors other than 1 and itself.  
   - By marking multiples of each prime starting from 2, all non-prime numbers are identified.  

2. **Steps**:  
   - Create a boolean array `isPrime[]` of size \( n+1 \), initialized to `true`.  
   - Starting from the first prime (2), mark all its multiples as `false`.  
   - Move to the next unmarked number and repeat until the square root of \( n \).  
   - The remaining `true` values in the array indicate prime numbers.  

---

### **Algorithm**  

#### **Steps in Detail**:  

1. Create a boolean array `isPrime` of size \( n+1 \):  
   \[
   \text{isPrime}[i] = \text{true for all } i \text{ initially}.
   \]  

2. Set `isPrime[0]` and `isPrime[1]` to `false`, as 0 and 1 are not prime.  

3. For every number \( p \) starting from 2:  
   - If \( \text{isPrime}[p] \) is `true`, mark all multiples of \( p \) from \( p^2 \) to \( n \) as `false`.  

4. Stop when \( p^2 > n \).  

5. The numbers still marked as `true` are prime.  

---

### **Code Implementation**  

```cpp  
#include <iostream>  
#include <vector>  
using namespace std;  

void sieveOfEratosthenes(int n) {  
    vector<bool> isPrime(n + 1, true);  

    // 0 and 1 are not prime numbers  
    isPrime[0] = isPrime[1] = false;  

    for (int p = 2; p * p <= n; p++) {  
        if (isPrime[p]) {  
            // Mark all multiples of p as non-prime  
            for (int i = p * p; i <= n; i += p) {  
                isPrime[i] = false;  
            }  
        }  
    }  

    // Print all prime numbers  
    for (int i = 2; i <= n; i++) {  
        if (isPrime[i]) {  
            cout << i << " ";  
        }  
    }  
    cout << endl;  
}  

int main() {  
    int n = 50;  
    cout << "Prime numbers up to " << n << ": " << endl;  
    sieveOfEratosthenes(n);  

    return 0;  
}  
```  

---

### **Example Execution**  

#### **Input**:  
\( n = 10 \).  

#### **Initial State**:  
`isPrime = [true, true, true, true, true, true, true, true, true, true, true]`  

#### **Step-by-Step Marking**:  
1. Start with \( p = 2 \):  
   - Mark multiples of 2 (\( 4, 6, 8, 10 \)) as `false`.  

2. Move to \( p = 3 \):  
   - Mark multiples of 3 (\( 9 \)) as `false`.  

3. Stop at \( p^2 > 10 \).  

#### **Final State**:  
`isPrime = [false, false, true, true, false, true, false, true, false, false, false]`  

#### **Output**:  
`2, 3, 5, 7`  

---

### **Complexity Analysis**  

1. **Time Complexity**:  
   - The algorithm iterates through numbers up to \( \sqrt{n} \).  
   - Marking multiples takes \( O(\frac{n}{p}) \) for each prime \( p \).  
   - Total complexity:  
     \[
     O(n \log \log n)
     \]  

2. **Space Complexity**:  
   - Boolean array `isPrime[]` of size \( n+1 \):  
     \[
     O(n)
     \]  

---

### **Key Takeaways**  

1. **Efficient**: Much faster than checking divisors for each number individually.  
2. **Applications**:  
   - Finding all primes up to \( n \).  
   - Used in cryptography, number theory, and competitive programming.  
3. **Limitations**: Requires \( O(n) \) space, which can be significant for large \( n \).  
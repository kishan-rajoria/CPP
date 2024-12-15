### **Conditional Statements, Loops in C++** 🚀  

---

### **Conditional Statements in C++**  

#### **1️⃣ If-Else Statement**  
🔹 The `if-else` statement is used to execute code based on a condition.  
- If the condition is **true**, the code inside `if` is executed.  
- If the condition is **false**, the code inside `else` is executed.  

**Syntax:**  
```cpp  
if (condition) {  
    // Code to execute if condition is true  
} else {  
    // Code to execute if condition is false  
}  
```  

**Example:**  
```cpp  
int num = 10;  
if (num % 2 == 0) {  
    cout << "Even number";  
} else {  
    cout << "Odd number";  
}  
```  

---

#### **2️⃣ If-Else If-Else Statement**  
🔹 Used when multiple conditions need to be checked.  
- You can use **`else if`** to verify more conditions.  
- There can be multiple `else if` blocks, but only one `else` block.  

**Syntax:**  
```cpp  
if (condition1) {  
    // Code for condition1  
} else if (condition2) {  
    // Code for condition2  
} else {  
    // Code if all conditions are false  
}  
```  

**Example:**  
```cpp  
int marks = 85;  
if (marks >= 90) {  
    cout << "Grade A";  
} else if (marks >= 75) {  
    cout << "Grade B";  
} else {  
    cout << "Grade C";  
}  
```  

---

#### **3️⃣ Ternary Statement**  
🔹 A shorthand for simple `if-else` statements.  
- Also called a **ternary operator** because it involves **three parts**: condition, true case, and false case.  

**Syntax:**  
```cpp  
(condition) ? true_case : false_case;  
```  

**Example:**  
```cpp  
int num = 10;  
string result = (num % 2 == 0) ? "Even" : "Odd";  
cout << result;  // Outputs: Even  
```  

---

### **Loops in C++**  
Loops are used to perform repeated tasks efficiently.  

#### **1️⃣ For Loop**  
🔹 A loop with three components:  
1. Initialization.  
2. Condition (checked before each iteration).  
3. Update (executed after each iteration).  

**Syntax:**  
```cpp  
for (initialization; condition; update) {  
    // Code to execute  
}  
```  

**Example:**  
```cpp  
for (int i = 1; i <= 5; i++) {  
    cout << i << " ";  // Outputs: 1 2 3 4 5  
}  
```  

---

#### **2️⃣ While Loop**  
🔹 Executes code as long as the condition is **true**.  

**Syntax:**  
```cpp  
while (condition) {  
    // Code to execute  
}  
```  

**Example:**  
```cpp  
int i = 1;  
while (i <= 5) {  
    cout << i << " ";  // Outputs: 1 2 3 4 5  
    i++;  
}  
```  

---

#### **3️⃣ Do-While Loop**  
🔹 Similar to `while`, but ensures the code executes at least once.  
- The condition is checked **after** execution.  

**Syntax:**  
```cpp  
do {  
    // Code to execute  
} while (condition);  
```  

**Example:**  
```cpp  
int i = 1;  
do {  
    cout << i << " ";  // Outputs: 1 2 3 4 5  
    i++;  
} while (i <= 5);  
```  

---

### **Nested Loops**  
🔹 A loop inside another loop. Useful for problems like printing patterns or working with multi-dimensional arrays.  

**Example:**  
```cpp  
for (int i = 1; i <= 3; i++) {  
    for (int j = 1; j <= 2; j++) {  
        cout << "(" << i << ", " << j << ") ";  
    }  
}  
// Outputs: (1, 1) (1, 2) (2, 1) (2, 2) (3, 1) (3, 2)  
```  

---

### **Break and Continue**  
- **`break`:** Exits the loop immediately.  
- **`continue`:** Skips the current iteration and moves to the next.  

**Example:**  
```cpp  
for (int i = 1; i <= 5; i++) {  
    if (i == 3) break;  
    cout << i << " ";  // Outputs: 1 2  
}  

for (int i = 1; i <= 5; i++) {  
    if (i == 3) continue;  
    cout << i << " ";  // Outputs: 1 2 4 5  
}  
```  

---

### **Tips for Loops**  
1️⃣ Avoid infinite loops, as they may crash your IDE.  
2️⃣ Use **meaningful variable names** that explain their purpose (e.g., `counter`, `sum`).  
3️⃣ Follow naming conventions:  
- `camelCase` for local variables (e.g., `studentCount`).  
- `PascalCase` for class names (e.g., `StudentRecord`).  

---

### **Prime Numbers**  
- **Definition:** A prime number is only divisible by 1 and itself.  
- **Example:** 2, 3, 5, 7, 11.  

**Code to Check Prime Number:**  
```cpp  
int num = 7;  
bool isPrime = true;  
for (int i = 2; i <= num / 2; i++) {  
    if (num % i == 0) {  
        isPrime = false;  
        break;  
    }  
}  
cout << (isPrime ? "Prime" : "Not Prime");  // Outputs: Prime  
```  

---

### **Exercises**  
1️⃣ **Sum of All Numbers Divisible by 3 from 1 to n**  
```cpp  
int n = 10, sum = 0;  
for (int i = 1; i <= n; i++) {  
    if (i % 3 == 0) sum += i;  
}  
cout << "Sum: " << sum;  // Outputs: Sum: 18  
```  

2️⃣ **Factorial of a Number (n!)**  
```cpp  
int n = 5, fact = 1;  
for (int i = 1; i <= n; i++) {  
    fact *= i;  
}  
cout << "Factorial: " << fact;  // Outputs: Factorial: 120  
```  

---

### **Key Takeaways**  
- Use `if-else` and loops effectively to control the flow of your programs.  
- Avoid infinite loops and follow naming conventions for better readability.  
- Practice writing small programs to master loops, conditional statements, and keywords like `break` and `continue`.  

Happy Coding! 😊✨  
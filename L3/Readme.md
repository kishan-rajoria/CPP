### **Patterns in C++** 🚀  

Patterns in C++ are a fun way to practice nested loops and logic building. Below, we explore various patterns, all solved using **for loops**.  

---

### **Steps to Solve Patterns**  
1. **Identify Rows and Columns:**  
   - Count the number of lines (**rows**) required.  
   - Determine what to print in each **row**.  

2. **Use Nested Loops:**  
   - Outer loop: Runs for the number of rows.  
   - Inner loop: Determines the content of each row.  

3. **Logic Inside the Inner Loop:**  
   - Define how many characters or numbers to print for each row.  

4. **ASCII Values for Characters:**  
   - Characters can be printed by adding offsets to the ASCII value of `'A'` or `'a'`.  

---

### **1️⃣ Square Pattern**  
**Problem:** Print a square pattern for `n = 4`.  

**Code:**  
```cpp  
int n = 4;  
for (int i = 0; i < n; i++) {  
    for (int j = 0; j < n; j++) {  
        cout << "* ";  
    }  
    cout << endl;  
}  
```  
**Output:**  
```
* * * *  
* * * *  
* * * *  
* * * *  
```  

---

### **2️⃣ Triangle Pattern**  
**Problem:** Print a triangle where each row contains increasing characters.  

**Code:**  
```cpp  
int n = 4;  
char ch = 'A';  
for (int i = 0; i < n; i++) {  
    for (int j = 0; j <= i; j++) {  
        cout << ch << " ";  
    }  
    ch++;  
    cout << endl;  
}  
```  
**Output:**  
```
A  
B B  
C C C  
D D D D  
```  

---

### **3️⃣ Reverse Triangle Pattern**  
**Problem:** Print a reverse triangle with numbers.  

**Code:**  
```cpp  
int n = 4;  
for (int i = n; i > 0; i--) {  
    for (int j = 0; j < i; j++) {  
        cout << j + 1 << " ";  
    }  
    cout << endl;  
}  
```  
**Output:**  
```
1 2 3 4  
1 2 3  
1 2  
1  
```  

---

### **4️⃣ Floyd’s Triangle Pattern**  
**Problem:** Print numbers in a triangular format.  

**Code:**  
```cpp  
int n = 4, num = 1;  
for (int i = 1; i <= n; i++) {  
    for (int j = 1; j <= i; j++) {  
        cout << num++ << " ";  
    }  
    cout << endl;  
}  
```  
**Output:**  
```
1  
2 3  
4 5 6  
7 8 9 10  
```  

---

### **5️⃣ Pyramid Pattern**  
**Problem:** Print a pyramid with stars.  

**Code:**  
```cpp  
int n = 4;  
for (int i = 1; i <= n; i++) {  
    for (int j = 1; j <= n - i; j++) {  
        cout << "  ";  
    }  
    for (int j = 1; j <= (2 * i - 1); j++) {  
        cout << "* ";  
    }  
    cout << endl;  
}  
```  
**Output:**  
```
      *  
    * * *  
  * * * * *  
* * * * * * *  
```  

---

### **6️⃣ Hollow Diamond Pattern**  
**Problem:** Print a hollow diamond.  

**Code:**  
```cpp  
int n = 4;  
for (int i = 1; i <= n; i++) {  
    for (int j = 1; j <= n - i; j++) cout << "  ";  
    for (int j = 1; j <= 2 * i - 1; j++) {  
        if (j == 1 || j == 2 * i - 1)  
            cout << "* ";  
        else  
            cout << "  ";  
    }  
    cout << endl;  
}  
for (int i = n - 1; i >= 1; i--) {  
    for (int j = 1; j <= n - i; j++) cout << "  ";  
    for (int j = 1; j <= 2 * i - 1; j++) {  
        if (j == 1 || j == 2 * i - 1)  
            cout << "* ";  
        else  
            cout << "  ";  
    }  
    cout << endl;  
}  
```  
**Output:**  
```
      *  
    *   *  
  *       *  
*           *  
  *       *  
    *   *  
      *  
```  

---

### **7️⃣ Butterfly Pattern**  
**Problem:** Print a butterfly pattern.  

**Code:**  
```cpp  
int n = 4;  
for (int i = 1; i <= n; i++) {  
    for (int j = 1; j <= i; j++) cout << "* ";  
    for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";  
    for (int j = 1; j <= i; j++) cout << "* ";  
    cout << endl;  
}  
for (int i = n; i >= 1; i--) {  
    for (int j = 1; j <= i; j++) cout << "* ";  
    for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";  
    for (int j = 1; j <= i; j++) cout << "* ";  
    cout << endl;  
}  
```  
**Output:**  
```
*             *  
* *         * *  
* * *     * * *  
* * * * * * * *  
* * * * * * * *  
* * *     * * *  
* *         * *  
*             *  
```  

---

### **Homework**  
**Print the logic for:**  
- `ABC`  
- `DEF`  
- `GHI`  

Try writing a nested loop to generate the desired patterns using ASCII values.  

---

### **Key Takeaways**  
- Use **nested loops** for pattern printing.  
- Explore the power of **ASCII values** for character-based patterns.  
- Understand how to control iterations with outer and inner loops.  


### **Outputs**

![alt text](CPP\L3\outputs\image.png)
![alt text](CPP\L3\outputs\image-1.png)
![alt text](CPP\L3\outputs\image-2.png)
![alt text](CPP\L3\outputs\image-3.png)
![alt text](CPP\L3\outputs\image-4.png)
![alt text](CPP\L3\outputs\image-5.png)
![alt text](CPP\L3\outputs\image-8.png)
![alt text](CPP\L3\outputs\image-7.png)
![alt text](CPP\L3\outputs\image-6.png)
![alt text](CPP\L3\outputs\image-9.png)
![alt text](CPP\L3\outputs\image-10.png)
![alt text](CPP\L3\outputs\image-11.png)
![alt text](CPP\L3\outputs\image-12.png)
![alt text](CPP\L3\outputs\image-13.png)
![alt text](CPP\L3\outputs\image-14.png)
![alt text](CPP\L3\outputs\image-15.png)


Happy Coding! 😊✨ 
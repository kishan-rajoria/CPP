### **Object-Oriented Programming (OOP) in C++** 🚀  

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of **objects**, which are instances of **classes**. It allows programmers to model real-world entities and their behaviors in code.  

---

### **Key Concepts of OOP**  

#### **1️⃣ Classes and Objects**  
- **Class**: A blueprint for creating objects. It defines properties (data members) and behaviors (member functions).  
- **Object**: An instance of a class.  

#### **Example**:  
```cpp  
#include <iostream>  
using namespace std;  

class Car {  
public:  
    string brand;  // Property  
    int speed;     // Property  

    void drive() {  // Behavior  
        cout << brand << " is driving at " << speed << " km/h." << endl;  
    }  
};  

int main() {  
    Car myCar;  // Create an object  
    myCar.brand = "Tesla";  
    myCar.speed = 100;  

    myCar.drive();  // Call the function  
    return 0;  
}  
```  

**Output**:  
```
Tesla is driving at 100 km/h.  
```  

---

#### **2️⃣ Encapsulation**  
- Wrapping data and methods in a single unit (class).  
- Protects data using **access modifiers**:  
  - **Public**: Accessible from anywhere.  
  - **Private**: Accessible only within the class.  
  - **Protected**: Accessible within the class and derived classes.  

**Example**:  
```cpp  
class BankAccount {  
private:  
    int balance;  // Private member  

public:  
    void setBalance(int amount) {  // Public setter  
        balance = amount;  
    }  

    int getBalance() {  // Public getter  
        return balance;  
    }  
};  

int main() {  
    BankAccount myAccount;  
    myAccount.setBalance(1000);  
    cout << "Balance: " << myAccount.getBalance() << endl;  
    return 0;  
}  
```  

**Output**:  
```
Balance: 1000  
```  

---

#### **3️⃣ Inheritance**  
- Allows a class (child) to **inherit** properties and behaviors from another class (parent).  

**Types of Inheritance**:  
- **Single**: One child inherits from one parent.  
- **Multiple**: One child inherits from multiple parents.  
- **Hierarchical**: Multiple children inherit from one parent.  

**Example**:  
```cpp  
class Vehicle {  
public:  
    void start() {  
        cout << "Vehicle started." << endl;  
    }  
};  

class Car : public Vehicle {  // Car inherits Vehicle  
public:  
    void honk() {  
        cout << "Car is honking." << endl;  
    }  
};  

int main() {  
    Car myCar;  
    myCar.start();  // Inherited method  
    myCar.honk();  
    return 0;  
}  
```  

**Output**:  
```
Vehicle started.  
Car is honking.  
```  

---

#### **4️⃣ Polymorphism**  
- **Poly** means many, and **morphism** means forms.  
- Allows the same function name or operator to behave differently based on the context.  

**Types of Polymorphism**:  
1. **Compile-Time Polymorphism**: Achieved using **function overloading** and **operator overloading**.  
2. **Run-Time Polymorphism**: Achieved using **virtual functions**.  

---

**Function Overloading**:  
```cpp  
class Calculator {  
public:  
    int add(int a, int b) {  
        return a + b;  
    }  

    double add(double a, double b) {  
        return a + b;  
    }  
};  

int main() {  
    Calculator calc;  
    cout << "Sum (int): " << calc.add(3, 5) << endl;  
    cout << "Sum (double): " << calc.add(3.5, 5.5) << endl;  
    return 0;  
}  
```  

**Output**:  
```
Sum (int): 8  
Sum (double): 9  
```  

---

**Virtual Functions** (Run-Time Polymorphism):  
```cpp  
class Animal {  
public:  
    virtual void sound() {  
        cout << "Animal makes a sound." << endl;  
    }  
};  

class Dog : public Animal {  
public:  
    void sound() override {  
        cout << "Dog barks." << endl;  
    }  
};  

int main() {  
    Animal* animal;  
    Dog dog;  
    animal = &dog;  

    animal->sound();  // Calls Dog's version of sound()  
    return 0;  
}  
```  

**Output**:  
```
Dog barks.  
```  

---

### **5️⃣ Abstraction**  
- Hiding implementation details while exposing only the essential features.  
- Achieved using:  
  1. **Abstract Classes** (classes with pure virtual functions).  
  2. **Interfaces**.  

**Example**:  
```cpp  
class Shape {  
public:  
    virtual void draw() = 0;  // Pure virtual function  
};  

class Circle : public Shape {  
public:  
    void draw() override {  
        cout << "Drawing a Circle." << endl;  
    }  
};  

int main() {  
    Shape* shape = new Circle();  
    shape->draw();  
    delete shape;  
    return 0;  
}  
```  

**Output**:  
```
Drawing a Circle.  
```  

---

### **Summary Table**  

| **Concept**       | **Definition**                                                                                 | **Example**                                 |  
|--------------------|-----------------------------------------------------------------------------------------------|---------------------------------------------|  
| **Class & Object** | Blueprint (class) and instance (object)                                                      | `Car myCar;`                                |  
| **Encapsulation**  | Wrapping data and methods, with controlled access via modifiers                              | Private members with public setters/getters |  
| **Inheritance**    | One class inherits properties/behaviors of another                                           | `class Car : public Vehicle`               |  
| **Polymorphism**   | Single function/operator behaves differently based on context                                | Function overloading/Virtual functions      |  
| **Abstraction**    | Hiding implementation details, exposing essential features                                   | Pure virtual functions                      |  

---

### **Key Takeaways**  
1. OOP simplifies real-world modeling in code.  
2. It promotes code reusability, scalability, and maintainability.  
3. Mastering OOP concepts like encapsulation, inheritance, and polymorphism is crucial for efficient software design.  
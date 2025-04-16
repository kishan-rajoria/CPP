### **Inheritance in Object-Oriented Programming (OOP)** 🚀  

Inheritance is a key concept in OOP that allows one class (child or derived class) to **inherit properties and methods** from another class (parent or base class). It promotes **code reuse** and establishes a natural hierarchy between classes.  

---

### **Key Features of Inheritance**  

1. **Code Reusability**: Child classes reuse methods and properties of the parent class.  
2. **Hierarchical Representation**: Represents real-world relationships (e.g., a Car is a type of Vehicle).  
3. **Extensibility**: Child classes can add or override features.  

---

### **Syntax in C++**  
```cpp  
class ParentClass {  
    // Members of the parent class  
};  

class ChildClass : access_modifier ParentClass {  
    // Members of the child class  
};  
```

- **Access Modifiers**:  
  - `public`: Public members of the parent remain public in the child.  
  - `protected`: Public and protected members of the parent become protected in the child.  
  - `private`: All inherited members become private in the child.  

---

### **Types of Inheritance in C++**  

1. **Single Inheritance**  
2. **Multiple Inheritance**  
3. **Hierarchical Inheritance**  
4. **Multilevel Inheritance**  
5. **Hybrid Inheritance**  

---

### **1️⃣ Single Inheritance**  

**Definition**:  
- One child class inherits from one parent class.  

**Example**:  
```cpp  
#include <iostream>  
using namespace std;  

class Vehicle {  
public:  
    void start() {  
        cout << "Vehicle started." << endl;  
    }  
};  

class Car : public Vehicle {  
public:  
    void honk() {  
        cout << "Car honking." << endl;  
    }  
};  

int main() {  
    Car myCar;  
    myCar.start();  // Inherited from Vehicle  
    myCar.honk();  
    return 0;  
}  
```  

**Output**:  
```
Vehicle started.  
Car honking.  
```  

---

### **2️⃣ Multiple Inheritance**  

**Definition**:  
- A child class inherits from multiple parent classes.  

**Example**:  
```cpp  
class Engine {  
public:  
    void showEngine() {  
        cout << "Engine: V8" << endl;  
    }  
};  

class Transmission {  
public:  
    void showTransmission() {  
        cout << "Transmission: Automatic" << endl;  
    }  
};  

class Car : public Engine, public Transmission {  
public:  
    void showCar() {  
        cout << "Car ready!" << endl;  
    }  
};  

int main() {  
    Car myCar;  
    myCar.showEngine();  
    myCar.showTransmission();  
    myCar.showCar();  
    return 0;  
}  
```  

**Output**:  
```
Engine: V8  
Transmission: Automatic  
Car ready!  
```  

---

### **3️⃣ Hierarchical Inheritance**  

**Definition**:  
- Multiple child classes inherit from a single parent class.  

**Example**:  
```cpp  
class Animal {  
public:  
    void eat() {  
        cout << "Animal eating." << endl;  
    }  
};  

class Dog : public Animal {  
public:  
    void bark() {  
        cout << "Dog barking." << endl;  
    }  
};  

class Cat : public Animal {  
public:  
    void meow() {  
        cout << "Cat meowing." << endl;  
    }  
};  

int main() {  
    Dog myDog;  
    Cat myCat;  

    myDog.eat();  // Inherited from Animal  
    myDog.bark();  

    myCat.eat();  // Inherited from Animal  
    myCat.meow();  

    return 0;  
}  
```  

**Output**:  
```
Animal eating.  
Dog barking.  
Animal eating.  
Cat meowing.  
```  

---

### **4️⃣ Multilevel Inheritance**  

**Definition**:  
- A class inherits from another class, which itself inherits from a third class.  

**Example**:  
```cpp  
class Vehicle {  
public:  
    void start() {  
        cout << "Vehicle started." << endl;  
    }  
};  

class Car : public Vehicle {  
public:  
    void honk() {  
        cout << "Car honking." << endl;  
    }  
};  

class SportsCar : public Car {  
public:  
    void turbo() {  
        cout << "SportsCar turbo activated!" << endl;  
    }  
};  

int main() {  
    SportsCar mySportsCar;  
    mySportsCar.start();  // Inherited from Vehicle  
    mySportsCar.honk();   // Inherited from Car  
    mySportsCar.turbo();  // Defined in SportsCar  
    return 0;  
}  
```  

**Output**:  
```
Vehicle started.  
Car honking.  
SportsCar turbo activated!  
```  

---

### **5️⃣ Hybrid Inheritance**  

**Definition**:  
- Combines two or more types of inheritance.  
- Can result in **diamond problem**, which is resolved using **virtual inheritance**.  

**Example**:  
```cpp  
class Vehicle {  
public:  
    void start() {  
        cout << "Vehicle started." << endl;  
    }  
};  

class LandVehicle : virtual public Vehicle { };  
class WaterVehicle : virtual public Vehicle { };  

class AmphibiousVehicle : public LandVehicle, public WaterVehicle { };  

int main() {  
    AmphibiousVehicle myVehicle;  
    myVehicle.start();  // No ambiguity due to virtual inheritance  
    return 0;  
}  
```  

---

### **Access Control in Inheritance**  

| **Base Class Access Modifier** | **Access in Derived Class (Public Inheritance)** | **Access in Derived Class (Protected Inheritance)** | **Access in Derived Class (Private Inheritance)** |  
|---------------------------------|-------------------------------------------------|----------------------------------------------------|--------------------------------------------------|  
| **Public**                     | Public                                           | Protected                                          | Private                                          |  
| **Protected**                  | Protected                                        | Protected                                          | Private                                          |  
| **Private**                    | Not Accessible                                  | Not Accessible                                    | Not Accessible                                  |  

---

### **Key Takeaways**  

1. **Inheritance promotes reusability** by enabling a child class to reuse the properties and methods of a parent class.  
2. **Types of Inheritance**: Single, Multiple, Multilevel, Hierarchical, and Hybrid.  
3. **Access Control**: Public, Protected, and Private inheritance define the accessibility of inherited members.  
4. **Virtual Inheritance** resolves ambiguity in hybrid inheritance. 
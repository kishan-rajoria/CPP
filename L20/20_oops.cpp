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

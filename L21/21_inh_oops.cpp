#include <iostream>  
#include <vector>  
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

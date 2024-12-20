#include <iostream> 
using namespace std;

//comment
//the below code has to be written

// int main() {
//     cout <<"Hello boys\ngirls";
//     return 0;
// }

//boilerplate code

// int main() {
//     int volt =24;
//     cout<<volt<<endl;
//     return 0;
// }

// int main() {
//     int volt =24;
//     char amp = 'f';
//     float g=9.8;
//     bool tripping =true; //true-->1 & false-->0
//     double power =92.20; //it double of float
//     // cout<<sizeof(volt)<<endl;
//     cout << power << endl;
//     return 0;
// }

// type conversion
// int main() {
//     char amp = 'f';
//     int value =amp; //here it store ASCII value of character f.
//     cout << value << endl;
//     return 0;
// }


// type conversion
// int main() {
//     double g=9.8;

//     int new_g =(int)g;
//     cout << new_g << endl;
//     return 0;
// }

//input in c++

// int main() {
//     int volt3;
//     cout <<volt3<<endl;
//     return 0;
// } //it return garbage value

// int main() {
//     int volt;
    
//     cout << "enter the voltage ";
//     cin>>volt;
    
//     cout <<"system voltage is: " <<volt <<endl;
//     return 0;

// }

//operators: Arithmetic

// int main() {
//     int a=8, b=9;
//     cout <<"sum = " << (a+b) << endl;
//     cout <<"difference = " <<(a-b) << endl;
//     cout <<"multiply = " <<(a*b) << endl;
//     cout <<"division = " <<(a/b) << endl;
//     cout <<"division with casting = " <<(a/double(b)) << endl; //here i want decimal value so did type casting
//     cout <<"modulo = " <<(a%b) << endl;
// }

//operators: Relational: these only return bool value
// int main() {
//     cout << (3<5) << endl;
//     cout << (3>5) << endl;
//     cout << (3==5) << endl;
//     cout << (3<=5) << endl;
//     cout << (3!=5) << endl;
//     cout << (3==5) << endl;
//     return 0;
// }
// //operators: logical (or ||, and &&: ampercent, not !)
// int main() {
//     cout << (3>1) << endl;
//     cout << !(3>1) << endl;
//     cout << ((3>1)||(3<1)) << endl;
//     cout << ((3>1)&(3<1)) << endl;
//     return 0;
// }

// //Sum of two numbers:
// int main() {
//     int a, b;
//     cout << "enter a: ";
//     cin >> a;

//     cout << "enter b: ";
//     cin>> b;

//     int sum =a+b;
//     cout << "sum =" << sum << endl;
//     return 0;
// }


// //unary operator

// int main() {
//     int a =10;
//     int b = a++;

//     cout << a <<endl;
//     cout << b <<endl;
//     return 0;

// }

// int main() {
//     int a =10;
//     int b = ++a;

//     cout << a <<endl;
//     cout << b <<endl;
//     return 0;

// }

// int main() {
//     int a =10;
//     int b = a--;

//     cout << a <<endl;
//     cout << b <<endl;
//     return 0;

// }

int main() {
    int a =10;
    int b = --a;

    cout << a <<endl;
    cout << b <<endl;
    return 0;

}
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

#include <iostream>  
#include <numeric>  // For std::gcd  
using namespace std;  

int main() {  
    int a = 56, b = 98;  
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;  
    return 0;  
}  

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

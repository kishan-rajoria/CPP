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

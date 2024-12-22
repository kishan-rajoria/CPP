#include <iostream>
using namespace std;

// void printjsr() {
//     cout<< "Jai\nShree\nRam\n";
// }

// int main() {
//     printjsr();
//     return 0;
// }

// int printinte() {
//     cout<< "Jai\nShree\nRam\n";
//     return 3;
// }

// int main() {
//     int val=printinte();
//     cout<<"val="<<val<<endl;
//     return 0;
// }


// int main() {
//     cout<<printinte()<<endl;
//     return 0;
// }

// //function to add two numbers
// int sum(int a, int b){
//     int s= a+b;
//     return s;
// }


// int main() {
//     cout<<sum(10,11)<<endl;
//     return 0;
// }

// int main() {
//     cout<<sum(10.99,11)<<endl;
//     return 0;
// }

//function to check minimum

// int mincheck(int a, int b){
//     if (a<b){
//         return a;
//     } else {
//         return b;
//     }
// }

// int main () {
//     cout<<mincheck(10,15)<<endl;
//     return 0;
// }

// //calculate the factorial
// int factorial(int a){
//     int fact =1;

//     for (int i=1; i<=a; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int main(){
//     cout<<factorial(6)<<endl;
//     return 0;
// }

//pass by value

// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     cout<<sum(5,4)<<endl;
//     return 0;
// }

// int changen(int n){
//     n=2*n;
//     cout<<"n= "<<n<<endl;
// }

// int main() {
//     int n=5;
//     changen(n);

//     cout<<"n= "<<n<<endl;
//     return 0;
// }

// //calculate sum of digit of number

// int digsum(int num){
//     int digitsum=0;
//     while (num>0){
//         int lastdig=num%10;
//         num/=10;
//         digitsum+=lastdig;
//     }
//     return digitsum;
// }

// int main(){
//     cout<<digsum(123456)<<endl;
//     return 0;

// }

//calculate the binomial cofficient for n & r?

int fact(int n){
    int fac=1;
    for(int i=1; i<=n; i++){
        fac*=i;
    }
    return fac;
}

int nCr(int n, int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nr=fact(n-r);

    return fact_n/(fact_r*fact_nr);
}

int main(){
    int n=6, r=3;
    cout<<nCr(n,r)<<endl;
    return 0;
}

#include <iostream>
using namespace std;

//check positive number

// int main(){
//     int n=55;

//     if (n>=0){
//         cout<< "n is positive\n";
//     }

//     return 0;
// }

//check negative number
// int main(){
//     int n= -55;

//     if (n>=0){
//         cout<< "n is positive\n";
//     } else {
//         cout <<"n is negative\n";
//     }
//     return 0;
// }

// int main() {
//     int voltage;
//     cout<<"Enter voltage level: " ;
//     cin>> voltage;

//     if (voltage >= 440) {
//         cout<<"over voltage\n";

//     } else {
//         (voltage <=400); {
//             cout<<"under voltage\n";
//         }
//     }

//     return 0;
// }

// use else if to check overload of motor
// int main() {
//     int amp;
//     cout<< "Enter running amp: ";
//     cin>>amp;

//     if (amp>=50){
//         cout<<"Motor running overload\n";
//     } else if (amp<50 && amp>30){
//         cout<<"Motor running optimal condition\n";
//     } else{
//         cout<<"Motor running underload\n";
//     }

//     return 0;

// }

//ternary statements

// int main(){
//     int amp=10;

//     cout<< (amp>=0 ? "Running": "Not Running") << endl;

//     return 0;


// }

//Loops

// int main() {
//     int n=25;
//     int count =1;

//     while(count<=n){
//         cout<<count<<"\n ";
//         count++;
//     }

//     return 0;
// }

// int main(){
//     int n=5;

//     for (int i=1; i<=n; i++) {
//         cout<<i<<"\n";
//     }
//     cout<<endl;

//     return 0;
// }

//sum of n numbers

// int main(){
//     int n=300;
//     int sum=0;

//     for (int i=1; i<=n; i++) {
//         sum+=i;
//         // cout<<"sum= "<<sum<<"\n";
//     }
//     cout<<"sum= "<<sum<<"\n";
//     cout<<endl;

//     return 0;
// }

//use break statement

// int main(){
//     int n=300;
//     int sum=0;

//     for (int i=1; i<=n; i++) {
//         sum+=i;
//         if (i==5) {
//             break;
//         }
//         // cout<<"sum= "<<sum<<"\n";
//     }
//     cout<<"sum= "<<sum<<"\n";
//     cout<<endl;

//     return 0;
// }

// int main() {
//     int n =5;

//     for (int i=1; i<=n; i++) {
//         if (i%2!=0) {
//             cout <<i<<"\n";
//         }
//     }
//     cout<<endl;
//     return 0;
// }

// int main() {
//     int n =5;

//     for (int i=1; i<=n; i++) {
//         if (i%2==0) {
//             cout <<i<<"\n";
//         }
//     }
//     cout<<endl;
//     return 0;
// }

// int main() {
//     int n =5;
//     int sum =1;

//     for (int i=1; i<=n; i++) {
//         if (i%2==0) {
//             sum=+i;
//             cout <<sum<<"\n";
//         }
//     }
//     cout<<endl;
//     return 0;
// }

// // do-while
// int main() {
//     int n =5;
//     int i =1;

//     do {
//         cout<<i<<" ";
//         i++;
//     } while (i<=n);

//     cout<<endl;
//     return 0;
// }

//check prime numbers

// int main(){
//     int n=7;
//     bool isPrime=true;
//     for (int i=2; i<=n-1; i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if (isPrime==true){
//         cout<<"prime no\n";
//     } else {
//         cout <<"non prime no\n";
//     }

//     return 0;
// }

// int main(){
//     int n=12;
//     bool isPrime=true;
//     for (int i=2; i*i<=n; i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if (isPrime==true){
//         cout<<"prime no\n";
//     } else {
//         cout <<"non prime no\n";
//     }

//     return 0;
// }

int main(){
    int n=10;
    for (int i=1; i<=n; i++) {
        int m=1;
        for(int j=1; j<=m; j++){
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

// //decimal to binary

// int dectobin(int decNum){
//     int ans=0, pow=1;
//     while(decNum>0){
//         int rem=decNum%2;
//         decNum /= 2;

//         ans += (rem*pow);
//         pow *=10;
//     }
//     return ans;
// }

// int main(){
//     int decNum =50;
//     for(int i=1; i<=10; i++){
//         cout<<dectobin(i)<<endl;
//     }
//     return 0;
// }

// //binary to decimal

// int binTodec(int bin_no){
//     int ans=0, pow=1;
//     while (bin_no>0){
//         int rem=bin_no%10;
//         ans += rem*pow;

//         bin_no/=10;
//         pow *=2;
        
//     }
//     return ans;
// }

// int main(){
//     cout<<binTodec(1010101)<<endl;
//     return 0;
// }

//convert -8 to binary and reverse

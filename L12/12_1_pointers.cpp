#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     int a = 10;
//     cout<<&a<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int* ptr =&a;
//     float price=100.25;
//     float* ptr2=&price;

//     cout<<ptr<<endl;
//     cout<<&a<<endl;
//     cout<<&ptr<<endl;
//     cout<<"float value"<<endl;
//     cout<<ptr2<<endl;
//     cout<<&price<<endl;
//     return 0;
// }


// int main(){
//     int a = 10;
//     int* ptr =&a;
    
//     int** parPtr=&ptr;

//     cout<<&ptr<<endl;
//     cout<<parPtr<<endl;

//     return 0;
// }

// int main(){
//     int a = 10;
//     int* ptr =&a;
    
//     int** parPtr=&ptr;

//     cout<<*(parPtr)<<endl;
//     cout<<ptr<<endl;
//     cout<<**(parPtr)<<endl;

//     return 0;
// // }

// int main(){
//     int* ptr =NULL;
//     cout<<ptr<<endl;
//     // cout<<**(ptr)<<endl;

//     return 0;
// }

// int main(){
//     int a = 10;
//     int *p =&a;
//     int **q=&p;

//     cout<<*p<<endl;
//     cout<<**q<<endl;
//     cout<<*q<<endl;
//     cout<<p<<endl;

//     return 0;
// }

// int main(){
//     int arr[]={1,2,3,4,5};

//     int a=10;
//     int* ptr=&a;

//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
//     return 0;

// }

// int main(){
//     int arr[]={1,2,3,4,5};

//     int a=10;
//     int* ptr=&a;

//     cout<<ptr<<endl;
//     ptr--;
//     cout<<ptr<<endl;
//     return 0;

// }

int main(){
    int arr[]={1,2,3,4,5};

    int a=10;
    int* ptr=&a;

    cout<<ptr<<endl;
    ptr=ptr+2;
    cout<<ptr<<endl;
    return 0;

}
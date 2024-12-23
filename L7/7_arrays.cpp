#include <iostream>
#include <climits>
using namespace std;

// int main(){
//     int marks [100]={99,100,54,32,28};

//     double price[] ={10.999,52.49,85.56,56.56}
//     return 0;

// }

// int main(){
//     int marks [100]={99,100,54,32,28};


//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<marks[4]<<endl;
//     return 0;

// }


// int main(){
//     int marks [100]={99,100,54,32,28};
//     int size=5;

//     cout<<sizeof(marks)<<endl;
//     return 0;

// }

// int main(){
//     int marks [100]={99,100,54,32,28};
//     int size=5;

//     cout<<sizeof(marks)/sizeof(int)<<endl;
//     return 0;

// }

// int main(){
//     int marks [5]={99,100,54,32,28};
//     int size=5;

//     for(int i=0; i<size; i++){
//         cout<< marks[i]<<endl;
//     }
//     return 0;
// }

// int main(){
//     int size=5;
//     int marks[size];

//     for(int i=0; i<size; i++){
//         cin>>marks[i];
//     }

//     for(int i=0; i<size; i++){
//         cout<< marks[i]<<endl;
//     }
//     return 0;
// }

// int main() {
//     int nums[]={5,15,22,1,-15,24};
//     int size=6;

//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         if (nums[i]<smallest){
//             smallest=nums[i];

//         }
//     }
//     cout<<"smallest= "<<smallest<<endl;
//     return 0;
// }

// int main() {
//     int nums[]={5,15,22,1,-15,24};
//     int size=6;

//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         smallest =min(nums[i], smallest);
//         }
//     cout<<"smallest= "<<smallest<<endl;
//     return 0;
// }

// int main() {
//     int nums[]={5,15,22,1,-15,24};
//     int size=6;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for(int i=0; i<size; i++){
//         smallest =min(nums[i], smallest);
//         largest=max(nums[i], largest);
//         }
//     cout<<"smallest= "<<smallest<<endl;
//     cout<<"largest= "<<largest<<endl;
//     return 0;
// }

// void changeArr(int arr[], int size){
//     cout<<"In function=";
//     for(int i=0; i<size; i++){
//         arr[i] = 2*arr[i];
//         cout<<arr<<endl;
//     }
// }

// int main(){
//     int arr[] ={1,2,3};

//     changeArr(arr, 3);
//     cout<<"in main\n";
//     for (int i=0; i<3; i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
//     return 0;
// }

// int linearSearch(int arr[], int sz, int target){

//     for (int i=0; i<sz; i++){
//         if (arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] ={4,2,7,8,1,2,5};
//     int sz =7;
//     int target =50;

//     cout<<linearSearch(arr, sz, target)<<endl;
//     return 0;

// }

void reverseArray(int arr[], int sz){
    int start = 0, end = sz-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int sz=7;

    reverseArray(arr,sz);
    for (int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
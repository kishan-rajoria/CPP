#include <iostream>
#include <vector>
using namespace std;

// int binarySearch(vector<int> arr, int tar){
//     int st=0, end=arr.size()-1;

//     while(st<=end){
//         int mid=(st+end)/2;

//         if(tar>arr[mid]){
//             st=mid+1;
//         } else if(tar<arr[mid]){
//             end=mid-1;
//         } else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> arr1={-1, 0, 3, 4, 5, 9, 12};
//     int tar1=12;

//     cout<<binarySearch(arr1, tar1)<<endl;

//     vector<int> arr2={-1, 0, 3, 5, 9, 12};
//     int tar2=0;
// }

// int main(){
//     vector<int> arr1={-1, 0, 3, 4, 5, 9, 12};
//     int tar1=5;

//     cout<<binarySearch(arr1, tar1)<<endl;

//     vector<int> arr2={-1, 0, 3, 5, 9, 12};
//     int tar2=0;
// }

// int main(){
//     vector<int> arr1={-1, 0, 3, 4, 5, 9, 12};
//     int tar1=50;

//     cout<<binarySearch(arr1, tar1)<<endl;

//     vector<int> arr2={-1, 0, 3, 5, 9, 12};
//     int tar2=0;
// }

// int main(){
//     vector<int> arr2={-1, 0, 3, 5, 9, 12};
//     int tar2=9;

//     cout<<binarySearch(arr2, tar2)<<endl;
//     return 0;
// }

// int main(){
//     vector<int> arr2={-1, 0, 3, 5, 9, 12};
//     int tar2=29;

//     cout<<binarySearch(arr2, tar2)<<endl;
//     return 0;
// }

// int binarySearch(vector<int> arr, int tar){
//     int st=0, end=arr.size()-1;

//     while(st<=end){
//         int mid=st+ (end-st)/2;

//         if(tar>arr[mid]){
//             st=mid+1;
//         } else if(tar<arr[mid]){
//             end=mid-1;
//         } else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> arr2={-1, 0, 3, 5, 9, 12};
//     int tar2=29;

//     cout<<binarySearch(arr2, tar2)<<endl;
//     return 0;
// }

int recBinarySearch(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid=st + (end-st)/2;

        if(tar>arr[mid]){
            return recBinarySearch(arr, tar, mid+1, end);
        } else if(tar<arr[mid]){
            return recBinarySearch(arr, tar, st, mid-1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr2={-1, 0, 3, 5, 9, 12};
    int tar2=3;

    cout<<recBinarySearch(arr2, tar2) <<endl;
    return 0;
}


int searchRotatedArray(vector<int>& arr, int target) {  
    int start = 0, end = arr.size() - 1;  

    while (start <= end) {  
        int mid = start + (end - start) / 2;  

        // Check if mid is the target  
        if (arr[mid] == target) return mid;  

        // Determine which half is sorted  
        if (arr[start] <= arr[mid]) {  // Left half is sorted  
            if (target >= arr[start] && target < arr[mid]) {  
                end = mid - 1;  // Target in left half  
            } else {  
                start = mid + 1;  // Target in right half  
            }  
        } else {  // Right half is sorted  
            if (target > arr[mid] && target <= arr[end]) {  
                start = mid + 1;  // Target in right half  
            } else {  
                end = mid - 1;  // Target in left half  
            }  
        }  
    }  

    return -1;  // Target not found  
}  

int main() {  
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};  
    int target = 0;  

    int result = searchRotatedArray(arr, target);  
    if (result != -1)  
        cout << "Target found at index: " << result << endl;  
    else  
        cout << "Target not found" << endl;  

    return 0;  
}  


int peakIndexInMountainArray(vector<int>& arr) {  
    int start = 0, end = arr.size() - 1;  

    while (start < end) {  
        int mid = start + (end - start) / 2;  

        if (arr[mid] < arr[mid + 1]) {  
            start = mid + 1;  // Peak lies in the right half  
        } else {  
            end = mid;  // Peak lies in the left half or at mid  
        }  
    }  

    return start;  // or return end (both are the same here)  
}  

int main() {  
    vector<int> arr = {1, 3, 5, 4, 2};  
    cout << "Peak index: " << peakIndexInMountainArray(arr) << endl;  // Outputs: 2  
    return 0;  
} 
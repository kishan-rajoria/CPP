#include <iostream>
#include <vector>
using namespace std;

// Merge function to merge two halves of the array
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    vector<int> L(n1), R(n2);

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    // Merge the temp arrays back into arr[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function to divide and conquer
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    // Recursively sort the first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    cout << "Original Array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

int sumOfNumbers(int n) {  
    return n * (n + 1) / 2;  
}  

int factorial(int n) {  
    int fact = 1;  
    for (int i = 1; i <= n; i++) {  
        fact *= i;  
    }  
    return fact;  
}  

int fibonacci(int n) {  
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}  

bool isPrime(int n) {  
    if (n <= 1) return false;  
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }  
    return true;  
}  

int binarySearch(vector<int>& arr, int target) {  
    int low = 0, high = arr.size() - 1;  
    while (low <= high) {  
        int mid = low + (high - low) / 2;  
        if (arr[mid] == target)  
            return mid;  
        else if (arr[mid] < target)  
            low = mid + 1;  
        else  
            high = mid - 1;  
    }  
    return -1;  
}  

void mergeSort(vector<int>& arr, int left, int right) {  
    if (left >= right) return;  
    int mid = left + (right - left) / 2;  
    mergeSort(arr, left, mid);  
    mergeSort(arr, mid + 1, right);  
    merge(arr, left, mid, right);  
}  

int fibonacci(int n) {  
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}  

void permute(string s, int l, int r) {  
    if (l == r) {  
        cout << s << endl;  
        return;  
    }  
    for (int i = l; i <= r; i++) {  
        swap(s[l], s[i]);  
        permute(s, l + 1, r);  
        swap(s[l], s[i]);  
    }  
}  


bool isPrime(int n) {  
    if (n <= 1) return false;  
    for (int i = 2; i < n; i++) {  
        if (n % i == 0) return false;  
    }  
    return true;  
}  

bool isPrime(int n) {  
    if (n <= 1) return false;  
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }  
    return true;  
}  

void selectionSort(vector<int>& arr) {  
    int n = arr.size();  
    for (int i = 0; i < n - 1; i++) {  
        int minIndex = i;  
        for (int j = i + 1; j < n; j++) {  
            if (arr[j] < arr[minIndex])  
                minIndex = j;  
        }  
        swap(arr[i], arr[minIndex]);  
    }  
}  

int factorial(int n) {  
    if (n <= 1) return 1;  
    return n * factorial(n - 1);  
}  

int fibonacci(int n) {  
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}  

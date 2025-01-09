#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {  
    if (n == 0) return 1;  // Base case  
    return n * factorial(n - 1);  // Recursive case  
}  


int fibonacci(int n) {  
    if (n <= 1) return n;  // Base case  
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case  
}  

int sumOfDigits(int n) {  
    if (n == 0) return 0;  // Base case  
    return n % 10 + sumOfDigits(n / 10);  // Recursive case  
}  

void reverseString(string& s, int start, int end) {  
    if (start >= end) return;  // Base case  
    swap(s[start], s[end]);  
    reverseString(s, start + 1, end - 1);  // Recursive case  
}  

bool isPalindrome(string& s, int start, int end) {  
    if (start >= end) return true;  // Base case  
    return (s[start] == s[end]) && isPalindrome(s, start + 1, end - 1);  // Recursive case  
}  

void towerOfHanoi(int n, char src, char dest, char aux) {  
    if (n == 0) return;  // Base case  

    towerOfHanoi(n - 1, src, aux, dest);  
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;  
    towerOfHanoi(n - 1, aux, dest, src);  
}  

int binarySearch(vector<int>& arr, int start, int end, int target) {  
    if (start > end) return -1;  // Base case  

    int mid = start + (end - start) / 2;  

    if (arr[mid] == target) return mid;  
    if (arr[mid] > target) return binarySearch(arr, start, mid - 1, target);  
    return binarySearch(arr, mid + 1, end, target);  
}  

void permute(string s, int start, int end) {  
    if (start == end) {  
        cout << s << endl;  
        return;  
    }  
    for (int i = start; i <= end; i++) {  
        swap(s[start], s[i]);  
        permute(s, start + 1, end);  
        swap(s[start], s[i]);  // Backtrack  
    }  
}  

void subsets(vector<int>& nums, vector<int>& current, int index) {  
    if (index == nums.size()) {  
        for (int num : current) cout << num << " ";  
        cout << endl;  
        return;  
    }  
    current.push_back(nums[index]);  
    subsets(nums, current, index + 1);  
    current.pop_back();  
    subsets(nums, current, index + 1);  
}  

#include <iostream>  
#include <vector>  
using namespace std;  

int main() {  
    vector<int> vec;  

    vec.push_back(10);  // Add elements  
    vec.push_back(20);  
    vec.push_back(30);  

    cout << "Elements in vector: ";  
    for (int num : vec) cout << num << " ";  
    cout << endl;  

    vec.pop_back();  // Remove the last element  

    cout << "After pop_back: ";  
    for (int num : vec) cout << num << " ";  
    cout << endl;  

    return 0;  
}  

#include <iostream>  
#include <vector>  
using namespace std;  

int main() {  
    pair<int, string> p = {1, "Hello"};  

    cout << "Pair: (" << p.first << ", " << p.second << ")" << endl;  

    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};  

    cout << "Vector of pairs: ";  
    for (auto& pr : vec) {  
        cout << "(" << pr.first << ", " << pr.second << ") ";  
    }  
    cout << endl;  

    return 0;  
}  

#include <iostream>  
#include <vector>  
using namespace std;  

void dnfSort(vector<int>& arr) {  
    int low = 0, mid = 0, high = arr.size() - 1;  

    while (mid <= high) {  
        if (arr[mid] == 0) {  
            swap(arr[low], arr[mid]);  
            low++;  
            mid++;  
        } else if (arr[mid] == 1) {  
            mid++;  
        } else {  
            swap(arr[mid], arr[high]);  
            high--;  
        }  
    }  
}  

int main() {  
    vector<int> arr = {2, 0, 2, 1, 1, 0};  

    dnfSort(arr);  

    for (int num : arr) cout << num << " ";  
    cout << endl;  

    return 0;  
}  

#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;  

void waveSort(vector<int>& arr) {  
    sort(arr.begin(), arr.end());  

    for (int i = 0; i < arr.size() - 1; i += 2) {  
        swap(arr[i], arr[i + 1]);  
    }  
}  

int main() {  
    vector<int> arr = {3, 6, 5, 10, 7, 20};  

    waveSort(arr);  

    for (int num : arr) cout << num << " ";  
    cout << endl;  

    return 0;  
}  

#include <iostream>  
#include <vector>  
using namespace std;  

int mergeAndCount(vector<int>& arr, int left, int mid, int right) {  
    vector<int> temp;  
    int i = left, j = mid + 1, count = 0;  

    while (i <= mid && j <= right) {  
        if (arr[i] <= arr[j]) {  
            temp.push_back(arr[i++]);  
        } else {  
            temp.push_back(arr[j++]);  
            count += (mid - i + 1);  // Count inversions  
        }  
    }  

    while (i <= mid) temp.push_back(arr[i++]);  
    while (j <= right) temp.push_back(arr[j++]);  

    for (int k = 0; k < temp.size(); k++)  
        arr[left + k] = temp[k];  

    return count;  
}  

int mergeSortAndCount(vector<int>& arr, int left, int right) {  
    int count = 0;  
    if (left < right) {  
        int mid = left + (right - left) / 2;  

        count += mergeSortAndCount(arr, left, mid);  
        count += mergeSortAndCount(arr, mid + 1, right);  
        count += mergeAndCount(arr, left, mid, right);  
    }  
    return count;  
}  

int main() {  
    vector<int> arr = {8, 4, 2, 1};  

    int inversionCount = mergeSortAndCount(arr, 0, arr.size() - 1);  

    cout << "Number of inversions: " << inversionCount << endl;  

    return 0;  
}  

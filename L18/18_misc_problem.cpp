#include <iostream>  
#include <vector>  
using namespace std;  

void generatePermutations(vector<int>& nums, int start, vector<vector<int>>& result) {  
    if (start == nums.size()) {  
        result.push_back(nums);  // Store the current permutation  
        return;  
    }  

    for (int i = start; i < nums.size(); i++) {  
        swap(nums[start], nums[i]);  // Swap to fix one element  
        generatePermutations(nums, start + 1, result);  // Recurse  
        swap(nums[start], nums[i]);  // Backtrack  
    }  
}  

int main() {  
    vector<int> nums = {1, 2, 3};  
    vector<vector<int>> result;  

    generatePermutations(nums, 0, result);  

    for (auto& perm : result) {  
        for (int num : perm) cout << num << " ";  
        cout << endl;  
    }  

    return 0;  
}  
 
#include <iostream>  
#include <vector>  
using namespace std;  

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {  
    for (int i = 0; i < row; i++)  
        if (board[i][col]) return false;  

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)  
        if (board[i][j]) return false;  

    for (int i = row, j = col; i >= 0 && j < n; i--, j++)  
        if (board[i][j]) return false;  

    return true;  
}  

void solveNQueen(vector<vector<int>>& board, int row, int n) {  
    if (row == n) {  
        for (auto& r : board) {  
            for (int cell : r) cout << (cell ? "Q " : ". ");  
            cout << endl;  
        }  
        cout << endl;  
        return;  
    }  

    for (int col = 0; col < n; col++) {  
        if (isSafe(board, row, col, n)) {  
            board[row][col] = 1;  
            solveNQueen(board, row + 1, n);  
            board[row][col] = 0;  // Backtrack  
        }  
    }  
}  

int main() {  
    int n = 4;  
    vector<vector<int>> board(n, vector<int>(n, 0));  

    solveNQueen(board, 0, n);  
    return 0;  
}

#include <iostream>  
#include <vector>  
using namespace std;  

void merge(vector<int>& arr, int left, int mid, int right) {  
    vector<int> temp;  
    int i = left, j = mid + 1;  

    while (i <= mid && j <= right) {  
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);  
        else temp.push_back(arr[j++]);  
    }  

    while (i <= mid) temp.push_back(arr[i++]);  
    while (j <= right) temp.push_back(arr[j++]);  

    for (int k = 0; k < temp.size(); k++)  
        arr[left + k] = temp[k];  
}  

void mergeSort(vector<int>& arr, int left, int right) {  
    if (left >= right) return;  

    int mid = left + (right - left) / 2;  
    mergeSort(arr, left, mid);  
    mergeSort(arr, mid + 1, right);  
    merge(arr, left, mid, right);  
}  

int main() {  
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};  

    mergeSort(arr, 0, arr.size() - 1);  

    for (int num : arr) cout << num << " ";  
    cout << endl;  

    return 0;  
}  

#include <iostream>  
#include <vector>  
using namespace std;  

int partition(vector<int>& arr, int low, int high) {  
    int pivot = arr[high];  
    int i = low - 1;  

    for (int j = low; j < high; j++) {  
        if (arr[j] < pivot) {  
            i++;  
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[high]);  
    return i + 1;  
}  

void quickSort(vector<int>& arr, int low, int high) {  
    if (low < high) {  
        int pi = partition(arr, low, high);  

        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  

int main() {  
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};  

    quickSort(arr, 0, arr.size() - 1);  

    for (int num : arr) cout << num << " ";  
    cout << endl;  

    return 0;  
}  

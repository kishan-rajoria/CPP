#include <iostream>  
#include <vector>  
using namespace std;  

void printPath(vector<vector<int>>& solution) {  
    for (const auto& row : solution) {  
        for (int cell : row) cout << cell << " ";  
        cout << endl;  
    }  
    cout << endl;  
}  

bool isSafe(int x, int y, vector<vector<int>>& maze, vector<vector<int>>& solution) {  
    int n = maze.size();  
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && solution[x][y] == 0);  
}  

bool solveMazeUtil(vector<vector<int>>& maze, int x, int y, vector<vector<int>>& solution) {  
    int n = maze.size();  

    // Base case: If the rat reaches the bottom-right corner  
    if (x == n - 1 && y == n - 1) {  
        solution[x][y] = 1;  
        printPath(solution);  
        return true;  // If you want all paths, don’t return here.  
    }  

    if (isSafe(x, y, maze, solution)) {  
        solution[x][y] = 1;  // Mark the cell as part of the path  

        // Move Down  
        if (solveMazeUtil(maze, x + 1, y, solution)) return true;  

        // Move Right  
        if (solveMazeUtil(maze, x, y + 1, solution)) return true;  

        // Move Up  
        if (solveMazeUtil(maze, x - 1, y, solution)) return true;  

        // Move Left  
        if (solveMazeUtil(maze, x, y - 1, solution)) return true;  

        solution[x][y] = 0;  // Backtrack  
    }  

    return false;  
}  

void solveMaze(vector<vector<int>>& maze) {  
    int n = maze.size();  
    vector<vector<int>> solution(n, vector<int>(n, 0));  

    if (!solveMazeUtil(maze, 0, 0, solution)) {  
        cout << "No solution exists" << endl;  
    }  
}  

int main() {  
    vector<vector<int>> maze = {  
        {1, 0, 0, 0},  
        {1, 1, 0, 1},  
        {0, 1, 0, 0},  
        {1, 1, 1, 1}  
    };  

    solveMaze(maze);  
    return 0;  
}  

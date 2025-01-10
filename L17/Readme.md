### **Backtracking: Rat in a Maze** 🚀  

---

### **Problem Description**  
The rat is placed at the top-left corner of a maze (represented as a 2D grid) and needs to find a path to the bottom-right corner.  
The maze contains:  
- \( 0 \): Blocked cell (cannot be traversed).  
- \( 1 \): Open cell (can be traversed).  

The goal is to print all possible paths or determine if a path exists.  

---

### **Approach**  

#### **Key Points**  
1. **Backtracking**:  
   - Explore all possible paths by recursively moving in each direction (up, down, left, right).  
   - If a move leads to a dead-end, backtrack and try a different direction.  

2. **Constraints**:  
   - The rat can only move to cells with value \( 1 \).  
   - The rat cannot move out of the grid boundaries.  

3. **Mark Visited Cells**:  
   - Use a `visited` array or temporarily modify the maze to avoid revisiting cells.  

---

### **Algorithm**  

1. Start at the top-left corner.  
2. Try moving in all possible directions (down, right, up, left).  
3. If the rat reaches the bottom-right corner, record the path.  
4. Backtrack if a move leads to an invalid or already visited cell.  

---

### **Code Implementation**  

```cpp  
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
```  

---

### **Input**  
Maze:  
```
1 0 0 0  
1 1 0 1  
0 1 0 0  
1 1 1 1  
```  

---

### **Output**  
Possible Path:  
```
1 0 0 0  
1 1 0 0  
0 1 0 0  
0 1 1 1  
```  

---

### **Explanation**  

1. Start from \( (0, 0) \).  
2. Move to \( (1, 0) \), then \( (1, 1) \).  
3. Move down, right, or up based on the constraints until the destination \( (n-1, n-1) \) is reached.  
4. If a dead-end is encountered, backtrack and try a different path.  

---

### **Complexity Analysis**  

1. **Time Complexity**:  
   - For an \( n \times n \) maze, the worst-case time complexity is \( O(4^{n^2}) \), as there are 4 possible directions at each cell.  

2. **Space Complexity**:  
   - \( O(n^2) \) for the `solution` matrix and the recursion stack.  

---

### **Key Takeaways**  

1. Backtracking is a trial-and-error approach to explore all possible solutions.  
2. Mark visited cells to avoid infinite loops.  
3. You can modify the algorithm to find all paths, shortest paths, or just one valid path.  
 
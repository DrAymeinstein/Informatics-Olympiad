// https://arena.moi/problem/interviewislands

#include <iostream>
#include <vector>

using namespace std;

// We're going to use Depth-First Search (DFS).
void markIsland(vector<vector<char>>& grid, int i, int j, int n, int m) {
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0') {
        return;
    }

    grid[i][j] = '0';  

    // explorer les cases adjacentes
    markIsland(grid, i - 1, j, n, m);
    markIsland(grid, i + 1, j, n, m);
    markIsland(grid, i, j - 1, n, m);
    markIsland(grid, i, j + 1, n, m);
    markIsland(grid, i - 1, j - 1, n, m);
    markIsland(grid, i - 1, j + 1, n, m);
    markIsland(grid, i + 1, j - 1, n, m);
    markIsland(grid, i + 1, j + 1, n, m);
}

int countIslands(vector<vector<char>>& grid, int n, int m) { // compter les iles
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '1') {
                markIsland(grid, i, j, n, m);
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    int result = countIslands(grid, n, m);
    cout << result << endl;

    return 0;
}

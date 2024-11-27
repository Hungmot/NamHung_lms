#include <iostream>
#include <vector>

using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

void dfs(vector<vector<int>>& grid, int i, int j) {
    int m = grid.size(), n = grid[0].size();
    grid[i][j] = -1; // Ðánh d?u dã tham

    for (int k = 0; k < 4; ++k) {
        int x = i + dx[k], y = j + dy[k];
        if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1) {
            dfs(grid, x, y);
        }
    }
}

int countIslands(vector<vector<int>>&grid) {
    int m = grid.size(), n = grid[0].size();
    int count = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                count++;  
                dfs(grid, i, j);
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int>>   
 grid = {
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0}
    };

    int numIslands = countIslands(grid);
    cout << "Number of domains: " << numIslands << endl;

    return 0;
}

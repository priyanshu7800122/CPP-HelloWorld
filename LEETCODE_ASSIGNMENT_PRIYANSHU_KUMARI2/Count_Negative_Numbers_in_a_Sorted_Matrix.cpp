#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;

        for (int i = 0; i < grid.size(); i++) {
            int pos = upper_bound(grid[i].rbegin(), grid[i].rend(), -1)
                      - grid[i].rbegin();

            count += pos;
        }

        return count;
    }
};

int main() {
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    Solution obj;
    cout << obj.countNegatives(grid);

    return 0;
}
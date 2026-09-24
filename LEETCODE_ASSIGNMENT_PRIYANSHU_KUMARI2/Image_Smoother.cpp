class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row = img.size();
        int col = img[0].size();

        vector<vector<int>> res(row, vector<int>(col));

        int neighbors[][2] = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},  {0, 0},  {0, 1},
            {1, -1},  {1, 0},  {1, 1}
        };

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                int sum = 0;
                int count = 0;

                for (auto& arr : neighbors) {
                    int a = i + arr[0];
                    int b = j + arr[1];

                    if (a >= 0 && b >= 0 && a < row && b < col) {
                        sum += img[a][b];
                        count++;
                    }
                }

                res[i][j] = sum / count;
            }
        }

        return res;
    }
};
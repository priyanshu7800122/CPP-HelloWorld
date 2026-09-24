class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), ans = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 1) {
                    int row = 0, col = 0;

                    for(int k = 0; k < n; k++)
                        row += mat[i][k];

                    for(int k = 0; k < m; k++)
                        col += mat[k][j];

                    if(row == 1 && col == 1)
                        ans++;
                }
            }
        }

        return ans;
    }
};
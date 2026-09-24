class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        
        vector<int> ans;

        for(int i = 0; i < matrix.size(); i++) {
            
            
            int smallest = matrix[i][0];
            int col = 0;

            for(int j = 1; j < matrix[i].size(); j++) {
                if(matrix[i][j] < smallest) {
                    smallest = matrix[i][j];
                    col = j;
                }
            }

            
            bool isLucky = true;

            for(int k = 0; k < matrix.size(); k++) {
                if(matrix[k][col] > smallest) {
                    isLucky = false;
                    break;
                }
            }

            if(isLucky) {
                ans.push_back(smallest);
            }
        }

        return ans;
    }
};
// 1351. Count Negative numbers in a sorted matrix
// beats 97.5%

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        int count =0;

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(grid[i][j]<0)
                    count++;
            }
        }

        return count;
    }
};

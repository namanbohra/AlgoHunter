/*
Sample TestCase:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Initially getting values
        //Here we declared col as 1 which means true
        int col0=1,cols=matrix[0].size(),rows=matrix.size();
        for(int i=0;i<rows;i++) {
            if(matrix[i][0]==0)col0=0;
            for(int j=1;j<cols;j++) {
                if(matrix[i][j]==0) 
                    matrix[i][0]=matrix[0][j]=0;
            }
        }
        for(int i=rows-1;i>=0;i--) {
            for(int j=cols-1;j>=1;j--) {
                if(matrix[i][0]==0||matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col0==0) matrix[i][0]=0;
        }
    }
};
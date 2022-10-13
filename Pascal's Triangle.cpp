/*
Sample TestCase:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> small;
        vector<vector<int>> big;
        if(numRows==0)
            return big;
            
            small.push_back(1);
            big.push_back(small);
         
       for(int i=1;i<numRows;i++) {
        vector<int> x;
           x.push_back(1);
           for(int j=1;j<i;j++)  
               x.push_back((big[i-1][j-1])+(big[i-1][j]));
            x.push_back(1);
           big.push_back(x);
               }

    return big;    
    }
};
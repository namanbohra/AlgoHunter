/*
Sample TestCase:
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
*/

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
     int n = arr.size();
     unordered_set<int> st;
     int res  = 0;
     for(int i=0;i<n;i++){
         st.insert(arr[i]);
     }
     
     for(int i=0;i<n;i++)
     {
         if(st.find(arr[i]-1) == st.end()){
             int curr = 1;
             while(st.find(curr+arr[i]) != st.end()){
                 curr++;
             }
             res = max(res,curr);
         }
     }
     return res;
    }
};
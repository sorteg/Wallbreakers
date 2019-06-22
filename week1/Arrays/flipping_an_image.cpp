class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        for(int row = 0; row < A[0].size(); row++){
            reverse(A[row].begin(), A[row].end());
            for(int col = 0; col < A.size(); col++){
                if(A[row][col] == 0){
                    A[row][col] = 1;
                }
                else{
                    A[row][col] = 0;
                }
            }
        }
        return A;
    }
};

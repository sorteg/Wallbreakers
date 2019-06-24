class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> B(A[0].size(), vector<int>(A.size(), 0));
        
        //         vector<vector<int>> B;
        //         B.resize(A[0].size());
        //         for(int i = 0; i < A[0].size(); i++){
        //             B[i].resize(A.size());
        //         }
        
        for(int row = 0; row < A[0].size(); row++){
            for(int col = 0; col < A.size(); col++){
                B[row][col] = A[col][row];
            }
        }
        return B;
    }
};

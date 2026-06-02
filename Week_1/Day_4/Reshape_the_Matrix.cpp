class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if ((m * n) != (r * c)) { /* check if the metrix can be reshaoed or not
            matrix can be reshaped if both matrix can conatin equal number of
             elements*/
            return mat;
        }
        vector<vector<int>> reshaped(r, vector<int>(c));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                /* instead of creating a 1-D array we find what would be the
                 element's index in 1-D array*/
                
                int flatindex = (i * n) + j;/* flat index is used to track the elements index if it was in a 1-D array*/
                // flat index=(rowno*total no of cols)+col no
                // new row=flatindex/new coln
                // new col =flatindex%newcoln no
                reshaped[flatindex / c][flatindex % c] = mat[i][j];
            }
        }
        return reshaped;
    }
};
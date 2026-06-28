#include <iostream>
#include <map>
#include <vector>
#include <unordered_set>
    
using namespace std;
// first approch is to mark the row and column with -1 and then change all -1 to 0 , TC => 0(N*M) + 0(N+M) + 0(N*M) => 0(N*M) and space complexity is SC => 0(1) as we are not using any extra space

class Solution {
    public : 
    void markRow(vector <vector <int>> & matrix, int i){ // got row number as i 
        int n = matrix[0].size(); // columns 
        // loop through all the column of that row.
        for (int j = 0; j < n; j++){ 
            if(matrix[i][j] != 0){ 
                matrix[i][j] = -1;
            }
        }
    }
    void markCol(vector <vector <int>> & matrix, int j){
        int m = matrix.size(); // rows 
        for (int i = 0; i < m; i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }
    void setZeroes(vector <vector <int>> & matrix){
        int m = matrix.size(); // rows
        int n = matrix[0].size(); // columns
        for (int i = 0; i < m; i ++){
            for (int j = 0; j < n; j++){
                if (matrix [i][j] == 0){ // matrix[row][column]
                    markRow(matrix , i);  // i => row 
                    markCol(matrix, j);  // j => column
                }
            }
        }
        for(int i = 0; i < m ; i++){
            for (int j = 0; j < n; j++){
                if (matrix[i][j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// second approch is to use extra space to store hash check of row and column then check in matrix if any element is 0 then mark the row and column in hash check or 1 then iterate again in matrix and convert all the marked row and column to 0 , TC => 0(N*M) AND SC => 0(N+M) as we are using two extra hash check for row and column

class Solution1 {
    public : 
    int setZeroes1(vector <vector<int>>& matrix){
        int m = matrix.size(); // rows
        int n = matrix[0].size(); // columns

        vector <int> row(m,0); // take row size hash which mark when it found any 0 in column 
        vector <int> col(n,0); // similarly it will make 1 when found 0 in any row

        for (int i = 0 ; i < m ; i ++){
            for (int j = 0; j < n ; j++){
                if (matrix[i][j] == 0){
                    row[i] = 1; // found zero at any position mark it with 
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(row[i] || col[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// third approch to reduce space complexity , instead of marking on hash we will mark inside the matrix 

class Solution2 {
public:
    void setZeroes2(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;

        // Step 1: Mark rows and columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == 0) {

                    matrix[i][0] = 0;

                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }

        // Step 2: Fill zeros using marks
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {

                if (matrix[i][j] != 0) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        // Step 3: First row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: First column
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    Solution2 obj;
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    obj.setZeroes2(matrix);
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

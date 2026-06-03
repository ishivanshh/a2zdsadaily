#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to rotate the matrix 90 degrees clockwise using extra space
    vector<vector<int>> rotateClockwise(vector<vector<int>>& matrix) {
        // Get the size of the square matrix
        int n = matrix.size();

        // Create a new matrix of same size to store rotated result
        vector<vector<int>> rotated(n, vector<int>(n));

        // Traverse each element of original matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Place the element at its new rotated position
                rotated[j][n - i - 1] = matrix[i][j];
            }
        }

        // Return the rotated matrix
        return rotated;
    }
};

// second approch => first transpose the matrix then reverse each and every row. TC 0(N*N) SC 0(1)


// Driver code
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;
    vector<vector<int>> rotated = obj.rotateClockwise(mat);

    // Print the rotated matrix
    for (auto row : rotated) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}
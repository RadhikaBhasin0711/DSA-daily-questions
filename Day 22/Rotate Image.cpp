class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        for(int i=0;i<matrix.size();i++){    //row
            for(int j=i;j<matrix.size();j++){    //col
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

    void reverseRows(vector<vector<int>>& matrix){
        for(int r=0;r<matrix.size();r++){
            int left=0;
            int right=matrix.size()-1;

            while(left<right){
                swap(matrix[r][left],matrix[r][right]);
                left++;
                right--;
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverseRows(matrix);
    }
};

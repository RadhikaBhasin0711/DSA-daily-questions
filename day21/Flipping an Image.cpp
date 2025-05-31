class Solution {
public:
    void flip(vector<vector<int>>& image){
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size()/2;j++){
                swap(image[i][j],image[i][image[i].size()-j-1]);
            }
        }
    }

    void invert(vector<vector<int>>& image){
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                image[i][j]= (!image[i][j]);
            }
        }
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        flip(image);

        invert(image);
        return image;

    }
};

class Solution {
public:
     void fill(vector<vector<int>> &image, int sr, int sc, int newColor, int prev) {
        if (sr < 0 or sc < 0 or sr >= image.size() or sc >= image[0].size()) 
            return;
        if (image[sr][sc] == prev) {
            if (prev == newColor) return;

            image[sr][sc] = newColor;
            fill(image, sr + 1, sc, newColor, prev);
            fill(image, sr, sc + 1, newColor, prev);
            fill(image, sr - 1, sc, newColor, prev);
            fill(image, sr, sc - 1, newColor, prev);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int prev =  image[sr][sc];
        fill(image,sr,sc,newColor,prev);
        return image;
    }
};
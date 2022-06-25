class Solution {
public:
    vector<int> constructRectangle(int area) {
       vector<int> v;
       int sroot=(int)sqrt(area);
        
        while(area%sroot!=0)
            sroot--;
        
        
        v.push_back(area/sroot),v.push_back(sroot);
        return v;
    }
};
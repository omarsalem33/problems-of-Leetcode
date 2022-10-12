class Solution {
public:
    int xorOperation(int n, int start) {
        vector < int > tmp;
        for(int i = 0 ; i < n ; i++){
            tmp.push_back(start + (2 * i));
        }
        
        int ans = 0 ;
        for(int i = 0 ; i < tmp.size()  ; i++){
            ans = (ans^tmp[i]);
        }
        return ans;
    }
};
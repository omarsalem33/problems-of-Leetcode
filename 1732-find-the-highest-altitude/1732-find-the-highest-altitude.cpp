class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector < int > pre(gain.size()+10, 0 );
        //gain[0] = pre[0];
        for(int i = 1 ; i <= gain .size() ; i++){
            pre[i] = pre[i-1] + gain[i-1];  
        }
        
        return *max_element(pre.begin() , pre.end());
    }
};
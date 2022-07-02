class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
       long long mod = 1000000007;
            sort(hc.begin(),hc.end());
         sort(vc.begin(),vc.end());
        
        int mxdx = hc[0],mxdy = vc[0];
        for(int i = 1;i < hc.size() ; i++)
            mxdx = max(mxdx , hc[i] - hc[i-1]);
        mxdx = max(mxdx,h-hc.back());
            
        for(int i = 1; i < vc.size() ; i++)
            mxdy=max(mxdy,vc[i] - vc[i-1]);
        mxdy = max(mxdy,w - vc.back());
        
        long long  l = mxdx , b = mxdy;
        
        return (l*b) % (mod);
    }
};
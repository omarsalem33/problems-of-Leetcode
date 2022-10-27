class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector< pair < int , int> >a , b;
		for(int i = 0 ;i < img1.size() ; i++) {
			for(int j = 0; j < img1.size(); j++) {
				if(img1[i][j] == 1) 
					a.push_back({i,j});
				if(img2[i][j] == 1 ) 
					b.push_back({i,j});
			}
		}
		int res = 0;
		map< pair < int , int > , int > mp;
		for(auto &i : a) {
			for(auto &j : b) {
				int x = i.first-j.first;
				int y = i.second-j.second;
				mp[{x,y}]++;
				res=max(res,mp[{x,y}]);
			}
		}
		return res;
    }
};
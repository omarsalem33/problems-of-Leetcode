class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
            int n=nums.size();
            vector<pair<long,int>> vec;
            for(int i = 0 ; i < n ; i++) 
                    vec.push_back({nums[i],i});
	
            sort(vec.begin(),vec.end());
	
            for(int i = 0;i < n ; i++){
                    for(int j = i + 1; j < n and (vec[j].first * 1L - vec[i].first) <= t ; j++){
                            if(abs(vec[j].second - vec[i].second) <= k) 
                                    return true;
		}
	}
	return false;
    } 
};
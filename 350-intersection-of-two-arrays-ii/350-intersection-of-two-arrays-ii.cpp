class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
            map<int , int>mp;
            vector < int > res;
            for(auto &i : nums1)
                    mp[i]++;
         for(int i = 0 ; i < nums2.size(); i++)
                 if(mp[nums2[i]] > 0)
                         res.push_back(nums2[i]) , mp[nums2[i]]--;
            
            return res;
    }
};
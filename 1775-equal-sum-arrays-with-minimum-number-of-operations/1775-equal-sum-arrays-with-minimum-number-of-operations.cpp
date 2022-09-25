class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
    
        int sum1 = accumulate(nums1.begin(),nums1.end(), sum1);
        int sum2 = accumulate(nums2.begin(),nums2.end(), sum2);
        
        if(sum1 == sum2)  return 0;
        if(sum1 > sum2)
            swap(sum1, sum2), swap(nums1, nums2);
            
            int def = sum2  - sum1 , ans = 0 ;
            vector < int > v;
            for(auto &i : nums1)    v.push_back(6 - i) ;
            for(auto &i : nums2)    v.push_back(i - 1) ;
            
            sort(v.rbegin() , v.rend());
            
            for(auto &i : v)
            {
                def -= i;
                ans++;
                if(def <= 0)      return ans;
            }
        return -1;
    }
};
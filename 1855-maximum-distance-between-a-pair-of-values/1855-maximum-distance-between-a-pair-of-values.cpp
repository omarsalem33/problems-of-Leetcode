class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
            int i = 0, j = 0, ans = 0;
            while(i<nums1.size() and j<nums2.size()){
                    if(i > j){ 
                            j++;
                            continue;
                    }
                    if(nums1[i] <= nums2[j]){
                            ans = max(ans,j-i);
                            j++;
                    }
                    else
                            i++;            
            }

            while(j < nums2.size()){
                    if(nums1.back() <= nums2[j]){
                            int temp = j - (nums1.size()-1);
                            ans = max(ans,temp);
                    }
                    j++;
            }
		
            return ans;
    }
};
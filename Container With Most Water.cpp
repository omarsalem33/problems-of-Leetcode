class Solution {
public:
   int maxArea(vector<int>& height) 
    {
        
        int maxA = 0;
        int left = 0;
        int n = height.size();
        int right = n-1;
        
        while(left < right)
        {
            int distance = right - left;
            int high = min(height[left],height[right]);
            int area = distance * high;
            maxA = max(maxA,area);
            
            if(height[left] < height[right])
                left++;
            else right--;
        }
        return maxA;
        
    }
};

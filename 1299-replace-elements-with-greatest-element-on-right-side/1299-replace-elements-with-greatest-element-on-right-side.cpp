class Solution {
public:
   vector<int> replaceElements(vector<int>& arr)
    {
        int mx=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            int temp=max(mx,arr[i]);
            arr[i]=mx;
            mx=temp;
        }
        return arr;
   }
};
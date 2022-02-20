class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>>ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        if(n<3)
        {return {};}
        if(arr[0]>0)
        {return {};}
        for(int i=0;i<n;i++){
           if(arr[i]>0)
           {break;} 
           int j=i+1,k=n-1,sum=0;
           if(i>0 and arr[i]==arr[i-1])
               continue;
           while(j<k){
               sum=arr[i]+arr[j]+arr[k];
               if(sum<0){
                   j++;
               }
               else if(sum>0){
                   k--;
               }
               else{
                   ans.push_back({arr[i],arr[j],arr[k]});
                   int lo_low=arr[j],lo_high=arr[k];
                   while(j < k and lo_low==arr[j])j++;
                   while(j<k and lo_high==arr[k])k--;
               }
           }
       }
        return ans;
    }
};

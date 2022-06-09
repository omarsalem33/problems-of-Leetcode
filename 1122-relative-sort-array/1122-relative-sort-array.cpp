class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map< int , int > m;
        vector< int > ans;
        for(auto &it : arr1)           m[it]++;
        for(auto &it : arr2)
        {
            int temp = m[it];
            while(temp--)
            {
                ans.push_back(it);
                m[it]--;
            }
        }
            
        for(auto &it:m)
        {
            if(it.second != 0)
            {
                int temp = it.second;
                while(temp--)
                    ans.push_back(it.first);
            }
        }
        return ans;
    }
};
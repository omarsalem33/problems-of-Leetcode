class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
       if(strs.size()==1) return {{strs[0]}};
        vector<vector<string>> v;
        unordered_map<string,vector<string>> m;
        int i,size;
        size=strs.size();
        string str;
        for(i=0;i<size;i++)
        {
            str=strs[i];
            sort(strs[i].begin(),strs[i].end()); 
            m[strs[i]].push_back(str);          
        }
        unordered_map<string,vector<string>>::iterator it;
        for(it=m.begin();it!=m.end();++it)
            v.push_back(it->second);  
        return v;
    }
};
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {

        map < string , vector < string > > mp;
        for(auto & s : paths)
        {
            int n = s.size();
            int i = 0;
            string path = "";
            while(i < n and s[i] != ' ')
                path += s[i] , i++;
            path += '/';
            i++;
            while (i < n)
            {
                string file_name = "";
                string file_ext = "";
                while (i < n and s[i] != '(')
                    file_ext += s[i] ,i++;
                while (i < n and s[i] != ' ')
                    file_name += s[i] ,i++;
                mp [file_name].push_back(path + file_ext) ,i++;
            }
        }
        vector<vector<string>> ans;
        for(auto x : mp)
            if(x.second.size() > 1)
                ans.push_back(x.second);
        
        return ans;
    }
};



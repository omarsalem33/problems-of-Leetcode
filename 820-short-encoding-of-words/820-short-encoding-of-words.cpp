class Solution {
public:
        static bool comp (string first , string second){
                return first.size() > second .size();
        }
    
        int minimumLengthEncoding(vector<string>& words) {
                int ans = 0 ;     
                map < string , int > mp;
                sort(words.begin() , words.end() , comp);
                for(auto &i : words)
                        mp[i]++;
                for(int i =0 ; i < words.size() ; i++){
                        int sz = words[i].size();
                        if(mp[words[i]] > 0)
                                ans += (sz + 1);
                        for(int j  = sz - 1 ; j >= 0 ; j--){
                                string s = words[i].substr(j , sz - j);                       
                                mp[s] = 0;
                        }
                        
                }
               
   
                return ans ;
        }
};
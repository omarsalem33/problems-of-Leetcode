class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map < char , int > mp;
            for(int i =0 ; i < ransomNote.size();i++)
                mp[ransomNote[i]]++;
            for(int i =0 ; i < magazine.size();i++)
                mp[magazine[i]]--;
        for(auto & i : mp)
            if(i.second > 0)
                return false;
        return true;
        
    }
};
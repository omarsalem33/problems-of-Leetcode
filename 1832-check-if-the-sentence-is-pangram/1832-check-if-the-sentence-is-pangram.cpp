class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26)
            return false;
        map < char , int >mp ;
        for(char i = 'a'; i <= 'z' ; i++)
            mp[i]++;
        for(char &i :sentence)
            mp[i]++;
        for(auto &i : mp)
            if(i.second <2)
                return false;
        return true;
    }
};
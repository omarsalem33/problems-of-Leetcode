class Solution {
public:
    string say(string s){
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            int count = 1;
            while(i+1 < s.size() and s[i] == s[i+1]){
                i++;
                count++;
            }
            ans+=(to_string(count)+s[i]);
        }
        return ans;
    }
    
    string countAndSay(int n) {
        if(n == 1) return "1";
        return say(countAndSay(n-1));//string size --> 3
    }
};
class Solution {
public:
    int numSplits(string s) {
     
        int n = s.size(), preFix[n] , suFix[n];
        set<char> preSet;
        set<char> suSet;

        for(int i=0; i<n ; i++){
            preSet.insert(s[i]);
            suSet.insert(s[n-1-i]);
            preFix[i]= preSet.size();
            suFix[n-1-i]= suSet.size();
        }

        int goodWays=0;

        for(int i=0; i<n-1; i++){
            if(preFix[i] == suFix[i+1]) 
                    goodWays++;
        }

        return goodWays;
    }
    
};
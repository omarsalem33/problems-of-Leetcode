class Solution {
public:
        bool backspaceCompare(string s, string t) {
        stack<char> a, b ;
        for(auto &x : s){
            if(!a.empty() and x == '#') 
                a.pop() ;
            else if(x != '#') 
                a.push(x) ;
        }
        for(auto &x : t){
            if(!b.empty() and x == '#') 
                b.pop();
            else if(x != '#')b.push(x) ;}
        
        if(a.size() != b.size())
            return false  ;
        
        while(!a.empty()) {
            if(a.top() != b.top()) 
                return false ;
            a.pop() , b.pop()   
        ;}
        return true 
     ;}
};

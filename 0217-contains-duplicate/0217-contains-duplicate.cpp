class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int , int > occ;
        for(auto &i : nums)
            occ[i]++;
        
        bool res = false ;
        for(auto &i: occ)
            if(i.second > 1){
                res = true ; 
                break;    
            } 
    return res;
    }
};
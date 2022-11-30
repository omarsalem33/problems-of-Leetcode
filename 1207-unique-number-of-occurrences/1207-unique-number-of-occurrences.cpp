class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map < int , int > occ;
        for(auto &i : arr)
            occ[i]++;
        map < int , int > check;
        for(auto &i : occ)
            check[i.second]++;
        for(auto &i : check)
            if(i.second > 1)
                return false;
        return true;
            
    }
};
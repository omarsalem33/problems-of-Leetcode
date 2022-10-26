class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector < int > ans ;
        set < int > s;
        for(int i = 0; i < boxes.size() ; i++) {
            if(boxes[i] == '1')
                s.insert (i);
        }
        
        for(int i = 0 ; i < boxes.size() ; i++) {
            int sum = 0;
            for(auto &j : s)
                sum += abs(i -j);
            ans.push_back(sum);
        }
        return ans;
    }
};
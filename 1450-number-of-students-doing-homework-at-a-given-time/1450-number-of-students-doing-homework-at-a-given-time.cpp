class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int ans = 0 ; 
        for(int i = 0 ; i < startTime.size() ; i++){
            if(startTime[i] <= queryTime and endTime[i] >= queryTime)
                ans++;
        }
        return ans;
    }
};
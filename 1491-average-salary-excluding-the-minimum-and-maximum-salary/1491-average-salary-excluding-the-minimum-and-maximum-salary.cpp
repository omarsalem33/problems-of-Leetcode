class Solution {
public:
    double average(vector<int>& salary) {
        double Min = *min_element(salary.begin(), salary.end());
        double Max = *max_element(salary.begin(), salary.end());
        double sum = 0;
        for(auto &i :salary)
            sum+=i;
        sum -=(Min + Max);
        int n  = salary.size() - 2 ;
        return sum / n;
        
    }
};
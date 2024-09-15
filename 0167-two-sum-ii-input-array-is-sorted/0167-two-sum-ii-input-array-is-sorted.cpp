class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
            int l = 0 , r = numbers.size() - 1;
            while(l <= r){
                    if(numbers[l] + numbers[r] == target)
                            return {l+1, r+1};
                    (numbers[l] + numbers[r] > target ? r -=1 : l += 1);
            }
    ;
            return {-1};
    }
};






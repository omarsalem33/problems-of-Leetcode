class Solution {
public:
    bool isPossible(vector<int>& nums) {
        if (nums.size () < 3)
                return false;
          
            map < int , int > freq , subseq;
            for(auto &i : nums)
                    freq[i] ++;
            
            for (auto &i : nums)
            {
                    if(freq[i] == 0)
                            continue;
                    else if (subseq[i - 1] > 0)
                            subseq[i - 1] --, subseq[i]++;
                    else if (freq[i + 1] > 0 and freq[i + 2] >0)
                            subseq[i + 2] ++, freq[i + 1] -- , freq[i + 2]--;
                    else 
                            return false;
                    freq[i] --;        
            }
            return  true ;
            
    }
};
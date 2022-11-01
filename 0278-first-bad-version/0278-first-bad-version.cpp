// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
     int firstBadVersion(int n) {
        int l = 1 , r = n , ans = 0 ;
         while(l <= r){
            int mid = l + (r-l)/2;
            if (!isBadVersion(mid) and isBadVersion(mid + 1))
                    return mid + 1;
            else if (!isBadVersion(mid)) 
                    l = mid + 1;
            else 
                    r = mid - 1;
         }
          return 1;
    }
};
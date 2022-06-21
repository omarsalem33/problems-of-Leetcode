class Solution {
public:
    int furthestBuilding(vector<int>& v, int b, int l) {
            priority_queue<int>pq;
            int ans = 0;
            bool flag = false;
            for(int i = 0; i < v.size() - 1 ; i++ ){
                    ans ++;
                    int dif = v[i+1] - v[i];
                    if(dif <= 0) 
                            continue;
                    b -= dif;
                    pq.push(dif);
                    if(b < 0){
                            b += pq.top();
                            pq.pop();
                            l--;
                    }
                                       
                    if(l < 0){
                         flag = true;    
                          break;
                    }
            }
            
            return (flag ? ans - 1  : ans );
    }
};
class Solution {
public:
    int compareVersion(string v1, string v2) {
         
            queue < int > q1, q2;
            string t1 = "" , t2 = "";
        
            for(int i = 0 ; i < v1.size(); i++)
            {
                    if(v1[i] != '.')
                            t1 +=v1[i];
                    else
                    {
                            q1.push(stoi(t1));
                            t1 = "";
                    }
             }
                 q1.push(stoi(t1));            
            for (int i = 0 ; i < v2.size() ; i++)
            {
                    if(v2[i] != '.')
                            t2 += v2[i];
                    else 
                    {
                            q2.push(stoi(t2));
                            t2 = "";
                    }
                            
            }
            q2.push(stoi(t2));
            while(!q1.empty() or !q2.empty())
            {
                    int x = 0 , y = 0;
                    if(q1.size() != 0)
                    {
                        x = q1.front();
                        q1.pop();     
                    }
                    
                    if(q2.size() != 0)
                    {
                          y = q2.front();
                          q2 .pop();
                    }
                    if(x > y)
                          return 1;
                    else if (y > x)
                          return -1;
            }
            return 0;
    }
};
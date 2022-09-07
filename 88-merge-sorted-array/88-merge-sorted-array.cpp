class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
  
            int i = m-1 , j  = n-1 , l = n+m-1;
           while(i >= 0 and j >= 0)
           {
                   if(num1[i] >= num2[j])
                   {
                           num1[l] = num1[i];
                           i--;
                   }else 
                   {
                           num1[l] = num2[j];
                           j--;
                   }
                   l--;
           }
            while(j>=0)
                    num1[l--] = num2[j--];
    }
};


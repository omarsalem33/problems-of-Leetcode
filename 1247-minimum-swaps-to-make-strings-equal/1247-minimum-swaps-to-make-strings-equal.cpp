class Solution {
public:
    int minimumSwap(string A, string B) {
        map< char, int> p;
        for( auto &x : A )
            p[x]++;
        for( auto &x : B )
            p[x]++;
        
        for(auto &i : p)
                if(i.second & 1)
                        return -1;
        
        int a = 0 , b = 0 ;
        
        for( int i = 0 ; i < A.size() ; i++ )
        {
            if( A[i] != B[i] )
            {
                if( A[i] == 'x' )
                        a++;
                else 
                        b++;
            }
        }
        if( (a+b)&1 )
            return -1 ;
        
        return (a+1) / 2 + (b+1) / 2 ;
    }
        
};
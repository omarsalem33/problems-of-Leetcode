class Solution {
public:
    int Count_Vowels(string s){
        int cnt = 0;
        for(char &i : s)
            if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U')
                cnt ++;
        return cnt;
    }
    bool halvesAreAlike(string s) {
        string a = "" , b = "";
        int n = s.size();
        for(int i = 0 , j = n / 2 ; i < n / 2 and j < n ; i++ , j++)
            a += s[i] , b += s[j];

        int cnta = Count_Vowels(a) , cntb = Count_Vowels(b);
        return(cnta == cntb);
    }
};
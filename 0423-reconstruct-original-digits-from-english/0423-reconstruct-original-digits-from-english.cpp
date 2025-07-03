class Solution {
public:
    string originalDigits(string s) {
        string ans="";
        unordered_map<char, int> mp;

        for(char ch : s)
            mp[ch]++;
        
          //guarantee letters
        while(mp['z']) //unique to 0
        {
            ans.push_back('0');
            mp['z']--;
            mp['e']--;
            mp['r']--;
            mp['o']--;
        }
        while(mp['w']) // unique to 2
        {
            ans.push_back('2');
            mp['t']--;
            mp['w']--;
            mp['o']--;
        }
        while(mp['x']) // unique to 6
        {
            ans.push_back('6');
            mp['s']--;
            mp['i']--;
            mp['x']--;
        }
        while(mp['g']) //unique to 8
        {
            ans.push_back('8');
            mp['e']--;
            mp['i']--;
            mp['g']--;
            mp['h']--;
            mp['t']--;
        }

        //from remaining letters
        while(mp['t']) //unique to 3
        {
            ans.push_back('3');
            mp['t']--;
            mp['h']--;
            mp['r']--;
            mp['e']-=2;
        }
        while(mp['r'])//unique to 4
        {
            ans.push_back('4');
            mp['f']--;
            mp['o']--;
            mp['u']--;
            mp['r']--;
        }
        while(mp['f'])//unique to 5
        {
            ans.push_back('5');
            mp['f']--;
            mp['i']--;
            mp['v']--;
            mp['e']--;
        }
        while(mp['v']) //unique to 7
        {
            ans.push_back('7');
            mp['s']--;
            mp['e']-=2;
            mp['v']--;
            mp['n']--;
        }
        while(mp['o'])
        {
            ans.push_back('1');
            mp['o']--;
            mp['n']--;
            mp['e']--;
        }
        while(mp['i'])
        {
            ans.push_back('9');
            mp['n']-=2;
            mp['i']--;
            mp['e']--;
        }

        sort(ans.begin(), ans.end());

        return ans ;

    }
};



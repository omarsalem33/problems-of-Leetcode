class Solution {
public:
    int strStr(string haystack, string needle) {
     int pos = haystack.find(needle);
        return pos>-1?pos:-1;
    }
};
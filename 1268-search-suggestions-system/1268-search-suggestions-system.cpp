class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
                        
         sort(products.begin(), products.end());
        vector< vector < string > > ans;
        int left = 0, right = products.size() - 1;
        for (int i = 0; i < searchWord.length(); i++) 
        {
            vector<string> res;
            char c = searchWord[i];
            while (left <= right and (products[left][i] < c)) 
                    left++;
            while (left <= right and (products[right][i] > c))
                    right--;
            for (int j = 0; j < 3 and left + j <= right; j++)
                res.push_back(products[left+j]);
            ans.push_back(res);
        }
        return ans;
    }
};
 
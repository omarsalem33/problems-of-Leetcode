public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        int max = candies[0];
        for(int i= 1; i < candies.Length; i++){
            if(max < candies[i])
                max = candies[i];
        }

        var res = new List<bool>(candies.Length);
        for(int i = 0 ; i < candies.Length; i++){
            res.Add(candies[i] + extraCandies >= max);
        }
        return res;
    }
}
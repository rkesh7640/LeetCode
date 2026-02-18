class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for(auto x:candies){
           int sum = x + extraCandies;
           int flag = 0;

           for(auto y:candies){
            if(y > sum){
                ans.push_back(false);
                flag = 1;
                break;
            }
           }
           if(flag == 0){
            ans.push_back(true);
           }
        }
        return ans;

    }
};
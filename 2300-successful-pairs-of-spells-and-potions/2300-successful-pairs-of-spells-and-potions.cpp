class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int m = potions.size();
        vector<int>ans;

        for(auto spell:spells){
            long long required = (success+spell-1)/spell;
            if(spell == 0){
                ans.push_back(0);
                continue;
            }

            int left = 0,right = m-1,res = m;
            while(left<=right){
                int mid = left+(right-left)/2;
                if(potions[mid] >= required){
                    res = mid;
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }
            }
            ans.push_back(m-res);
        }
        return ans;
    }
};
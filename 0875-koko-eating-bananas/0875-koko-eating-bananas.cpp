class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right  = *max_element(piles.begin(),piles.end());

        while(left < right){
            int mid = left + (right - left)/2;
            long long hours = 0;

            for(auto banana : piles){
                if(banana % mid == 0) hours += banana / mid;
                else hours += banana / mid + 1;
            }

            if(hours <= h){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};
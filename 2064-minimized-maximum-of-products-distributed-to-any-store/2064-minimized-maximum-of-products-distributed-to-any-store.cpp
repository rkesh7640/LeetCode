class Solution {
public:
    int minimizedMaximum(int n,vector<int>& quantities) {
        int left = 1;
        int right = *max_element(quantities.begin(),quantities.end());

        while(left < right){
            int mid = left +(right - left)/2;
            long long store = 0;

            for(auto qty:quantities){
                store += (qty + mid - 1) / mid;
            }
            if(store <= n){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};
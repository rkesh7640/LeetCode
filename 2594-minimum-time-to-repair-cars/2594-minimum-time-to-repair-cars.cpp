class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1;
        long long right = (long long)*max_element(ranks.begin(), ranks.end()) * cars * cars;

        while(left < right){
            long long mid = left + (right - left) / 2;
            long long car = 0;

            for(auto rank : ranks){
                car += sqrt(mid / rank);
            }

            if(car >= cars){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};
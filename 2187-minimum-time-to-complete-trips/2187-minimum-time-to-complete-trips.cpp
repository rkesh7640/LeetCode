class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 1,
        right = (long long) *min_element(time.begin(),time.end()) * totalTrips;

        while(left < right){
            long long mid = left + (right - left) / 2;
            long long trip = 0;

            for(auto bus:time){
                trip = trip + mid / bus;
                if(trip > totalTrips) break;
            }

            if(trip >= totalTrips){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};
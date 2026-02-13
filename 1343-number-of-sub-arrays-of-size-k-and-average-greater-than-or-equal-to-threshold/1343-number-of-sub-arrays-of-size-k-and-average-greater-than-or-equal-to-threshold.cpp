class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int windowSum = 0,count = 0;
        for(int i = 0; i < k; i++){
            windowSum += arr[i];
        }
            if(windowSum >= threshold * k){
                count++;
            }

        for(int i = k;i < arr.size(); i++){
            windowSum = windowSum - arr[i-k] + arr[i];
            if(windowSum >= threshold * k){
                count++;
            }
        }
        return count;
    }
};
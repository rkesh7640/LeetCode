#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long left = 0, right = x; 
        long mid;

        while(left <= right){
            mid = (left + right) / 2;

            if(mid * mid == x) 
                    return mid;
            else if(mid * mid > x) 
                      right = mid - 1;
            else 
                left = mid + 1;
        }
        return right;
    }
};

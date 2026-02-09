class Solution { 

public: 

    int lastIndex(vector<int>& nums, int target) 

    { 

        //binary search for last index 

        int ans=-1; 

        int left=0, 

            right=nums.size()-1; 

        while(left<=right) 

        {  

            int mid=left+(right-left)/2; 

            if(nums[mid]==target) 

            { 

                ans=mid; 

                left=mid+1; 

            } 

            else if(nums[mid]>target) right=mid-1; 

            else left=mid+1; 

        } 

        return ans; 

    } 

    int firstIndex(vector<int>& nums, int target) 

    { 

        //binary search 

        int ans=-1; 

         int left=0, 

            right=nums.size()-1; 

        while(left<=right) 

        {  

            int mid=left+(right-left)/2; 

            if(nums[mid]==target) 

            { 

                ans=mid; 

                right=mid-1; 

            } 

            else if(nums[mid]>target) right=mid-1; 

            else left=mid+1; 

        } 

        return ans; 

    } 

    vector<int> searchRange(vector<int>& nums, int target) { 

        return {firstIndex(nums,target),lastIndex(nums,target)}; 

    } 

}; 
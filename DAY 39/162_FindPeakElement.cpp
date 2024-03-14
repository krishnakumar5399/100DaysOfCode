class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int e=nums.size()-1;
        int s=0;

        while(s<e)
        {
            int mid=s+ (e-s)/2;
            if(nums[mid]>nums[mid+1])
            e=mid;
            else
             s=mid+1;
        }
        return e;
    
        
    }
};
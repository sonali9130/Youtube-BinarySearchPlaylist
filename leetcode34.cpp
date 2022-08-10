class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1;
        
        vector<int> ans(2, -1);
        while(lo<=hi){
            int mid=lo+((hi-lo)>>1);
            if(nums[mid]){
                ans[1]=mid;
                lo=mid;
            }
            else if(nums[mid] < target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        
        while(lo<=hi){
            int mid=lo+((hi-lo)>>1);
            if(nums[mid]){
                ans[0]=mid;
                hi=mid;
            }
            else if(nums[mid] < target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        
        return ans;
    }
};

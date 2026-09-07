class Solution {
public:
   int lowerBound(vector<int>&nums , int target){
    int n = nums.size();
    int start = 0;
    int end = n-1;
    int ans1 = n;
    while(start<=end){
      int mid = (start+end)/2;
      if(nums[mid]>=target){
          ans1 = mid;
           end = mid-1;
      }else{
      start = mid+1;
      }
   }
   return ans1;
   }
   int upperBound(vector<int>&nums , int target){
    int n = nums.size();
    int start = 0;
    int end = n-1;
    int ans2 = n;
    while(start<=end){
      int mid = (start+end)/2;
      if(nums[mid]>target){
          ans2 = mid;
           end = mid-1;
      }else{
      start = mid+1;
      }
   }
   return ans2;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums,target);
        int up = upperBound(nums,target);
        if(lb==n || nums[lb]!=target){
            return {-1,-1};
        }
        return {lb ,up-1};
    }
};
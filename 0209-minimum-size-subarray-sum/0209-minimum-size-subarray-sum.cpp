class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int n = nums.size();
     int currSum = 0;
     int minLen = INT_MAX;
     int left = 0;
     for(int right = 0; right<n; right++ ){
        currSum+=nums[right];
        while(currSum>=target){
           int currLen = right-left+1;
           minLen = min(minLen , currLen);
           currSum-=nums[left];
           left++;
        }
     }
     if(minLen == INT_MAX){
        return 0;
     }else{
        return minLen;
     }
    }
};
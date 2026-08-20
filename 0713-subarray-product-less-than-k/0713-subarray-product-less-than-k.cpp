class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int count = 0;
        int currproduct = 1;
        if(k<=1){
            return 0;
        }
        for(int i = 0; i<n; i++){
            currproduct *= nums[i];
            while(currproduct>=k){
               currproduct /=nums[left];
               left++;
            }
           count += i-left+1;
        }
        return count;
    }
};
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int totalzero = 0;
        int maxlength = 0;
        int left = 0;
        for(int i  = 0; i<n ; i++){
            if(nums[i]==0){
                totalzero++;
            }
            while(totalzero>k){
                if(nums[left] == 0){
                    totalzero--;
                }
                left++;
            }
            maxlength = max(maxlength, i-left+1);
        }
        return maxlength;
    }
};
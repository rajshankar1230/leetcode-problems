class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int currsum = 0;
        int left = 0;
        int max_len = -1;
        int total_sum = 0;
        for(int i = 0; i<n; i++){
            total_sum+=nums[i];
        }
        int target = total_sum - x;
        if(target == 0) return n;
        if(target < 0) return -1;
        for(int right = 0; right<n; right++){
            currsum+=nums[right];
            while(currsum>target && left<=right){
                currsum -= nums[left];
                left++;
            }
            if(currsum== target){
                int currlen = right-left+1;
                max_len = max(currlen , max_len);
            }
        }
        if(max_len == -1){
            return -1;
        }else{
            return n - max_len;
        }
    }
};
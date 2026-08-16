class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int left = 0;
        int curr_sum = 0;
        int min_len = INT_MAX;
        
        for (int right = 0; right < nums.size(); ++right) {
            curr_sum += nums[right];
            
            // Shrink window from the left while the condition is satisfied
            while (curr_sum >= target) {
                min_len = std::min(min_len, right - left + 1);
                curr_sum -= nums[left];
                left++;
            }
        }  
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};
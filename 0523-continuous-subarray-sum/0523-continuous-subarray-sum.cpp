class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        int currsum = 0;
        int n = nums.size();
        map[0] = -1;
        for(int i = 0; i<n; i++){
            currsum += nums[i];
            int rem = currsum%k;
            if(rem<0){
                rem+=k;
            }
            if(map.count(currsum%k)){
                if(i-map[rem]>=2){
                    return true;
                }
            }
            else{
            map[rem] = i;
            }
        }
        
        return false;
    }
};
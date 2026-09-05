class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>map;
        int n = nums.size();
        int currsum = 0;
        int maxlength = 0;
        map[0] = -1;
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                currsum += 1;
            }else{
                currsum -= 1;
            }
         if(map.find(currsum)!= map.end()){
            int len = i - map[currsum];
            maxlength = max(len , maxlength);
         }else{
          map[currsum] = i;
         }
        }
        return maxlength;
        
    }
};
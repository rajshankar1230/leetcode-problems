class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int>map;
        int count = 0;
        int currsum = 0;
        map[0] = 1;
        for(int i = 0; i<n; i++){
            currsum+=nums[i];
            int rem = (currsum%k+k)%k;
            if(map.find(rem)!=map.end()){
                count+=map[rem];
            }
            map[rem]++;
        }
        return count;
    }
};
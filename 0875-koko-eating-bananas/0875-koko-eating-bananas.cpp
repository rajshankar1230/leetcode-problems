class Solution {
public:
    long long timefunction(vector<int>&piles,int mid){
        int n = piles.size();
        long long sum = 0;
        for(int i = 0; i<n; i++){
            sum+=(piles[i]/mid)+(piles[i]%mid!=0);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int low = 1;
       int high = *max_element(piles.begin(),piles.end());
       int ans = 1;
       while(low<=high){
        int mid = low+(high-low)/2;
        long long  time = timefunction(piles,mid);
        if(time<=h){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
       }
       return ans;
    }
};
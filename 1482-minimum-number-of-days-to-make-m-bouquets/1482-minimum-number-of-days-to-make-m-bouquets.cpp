class Solution {
public:
   int canMakeBouquets(vector<int>&bloomDay,int mid , int m , int k){
    int bouquests = 0;
    int flowers = 0;
    for(auto bloom : bloomDay){
        if(bloom<=mid){
            flowers++;
            if(flowers == k){
                bouquests++;
                flowers = 0;
            }
        }else{
            flowers = 0;
        }
    }
    return bouquests>=m;
   }
    int minDays(vector<int>& bloomDay, int m, int k) {
      int n = bloomDay.size();
      int low = *min_element(bloomDay.begin(),bloomDay.end());
      int high = *max_element(bloomDay.begin(),bloomDay.end());
      int ans = -1;
      if((long long)m*k>n){
        return -1;
      }
      while(low<=high){
        int mid = low+(high-low)/2;
        if(canMakeBouquets(bloomDay,mid,m,k)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
      }
      return ans;


    }
};
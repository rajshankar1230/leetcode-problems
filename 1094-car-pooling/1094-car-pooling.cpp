class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>totalpassenger(1001,0);
        for(const auto&trip : trips){
            int numpassenger = trip[0];
            int from  = trip[1];
            int to = trip[2];
            totalpassenger[from] += numpassenger;
            totalpassenger[to] -= numpassenger;
        }
        int currpassenger = 0;
        for(int location = 0; location<1000; location++){
            currpassenger += totalpassenger[location];
            if(currpassenger > capacity){
                return false;
            }
        }
        return true;
    }
};
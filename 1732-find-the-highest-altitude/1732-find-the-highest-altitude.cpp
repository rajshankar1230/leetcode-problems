class Solution {
public:
    vector<int>prefix;
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        prefix.resize(n+1);
        int maxAltitude = 0;
        prefix[0] = 0;
        for(int i = 1; i<=n; i++){
            prefix[i] = prefix[i-1] + gain[i-1];
            maxAltitude = max(prefix[i], maxAltitude); 
        }
        return maxAltitude;

    }
};
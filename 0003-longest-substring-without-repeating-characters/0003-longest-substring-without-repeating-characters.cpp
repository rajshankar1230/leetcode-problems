class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char>set;
        int left = 0;
        int maxlen = 0;
        for(int i = 0; i<n; i++){
            while(set.find(s[i])!=set.end()){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[i]);
            maxlen = max(maxlen , i-left+1);
        }
        return maxlen;
    }
};
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        long long totalshift = 0;
        for(int i = n-1; i>=0; i--){
            totalshift = (totalshift + shifts[i])%26;
            int currpos = s[i] - 'a';
            int newpos = (totalshift + currpos)%26;
            s[i] = 'a' + newpos;
        }
        return s;
    }
};
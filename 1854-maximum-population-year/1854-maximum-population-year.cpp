class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
       vector<int>diff(101,0);
       for(const auto& log : logs){
        int birth = log[0];
        int death = log[1];
        diff[birth - 1950] +=1;
        diff[death - 1950] -=1;
       }
       int currpopulation = 0;
       int maxYear = 1950;
       int maxpopulation = 0;
       for(int i = 0; i<101; i++){
         currpopulation += diff[i];
         if(currpopulation > maxpopulation){
            maxpopulation = currpopulation;
            maxYear = 1950 + i;
         }
       }
       return maxYear;
    }
};
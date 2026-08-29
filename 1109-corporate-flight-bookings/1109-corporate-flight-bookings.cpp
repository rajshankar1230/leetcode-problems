class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>answer(n,0);
        for(const auto& booking : bookings){
            int first = booking[0]-1;
            int last = booking[1]-1;
            int seats = booking[2];
            answer[first] += seats;
            if(last+1 < n){
                answer[last+1] -= seats; 
            } 
        }
        for(int i = 1; i<n ; i++){
            answer[i] += answer[i-1];
        }
        return answer;
           
    }
};
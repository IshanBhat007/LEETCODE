class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highest = 0;
        for  (auto cust : accounts) {
            int current =  accumulate(cust.begin(), cust.end(), 0);
            if (current > highest) {
                highest = current;
            }
        }
        return highest;
    }
};

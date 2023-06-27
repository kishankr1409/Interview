// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCP =INT_MAX;
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++){
            minCP = min(minCP,prices[i]);
            maxProfit = max(maxProfit,prices[i]-minCP);
        }
        return maxProfit;
    }
};

// https://www.youtube.com/watch?v=4YjEHmw1MX0&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=30&ab_channel=Pepcoding
/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX, maxProf=0, n=prices.size();
        for(int i=0; i<n; i++)
        {
            if(buy>prices[i])
                buy = prices[i];
            int prof = prices[i] - buy;
            if(maxProf<prof)
                maxProf = prof;
        }
        return maxProf;
    }
};



/*
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.

Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy = prices[0], profit = 0;
       for(int i=0; i<prices.size(); i++)
       {
            buy = min(buy, prices[i]);

            if(prices[i]>buy)
            {
                profit += prices[i] - buy;
                buy = prices[i];
            }
       }
       return profit;    
    }
};


/*

*/

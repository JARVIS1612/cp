#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int knapsackFun(vector<vector<int>> &dp, vector<int> weight, vector<int> value, int n, int maxWeight, int i, int currentWeight)
{
	if(i==n)
		return 0;
	
	if(dp[i][currentWeight]!=-1)
    {
        cout << "DP\n";
		return dp[i][currentWeight];
    }

	int take = INT_MIN;
	if(currentWeight+weight[i]<=maxWeight)
		take = value[i] + knapsackFun(dp, weight, value, n, maxWeight, i+1, currentWeight+weight[i]);	
	
	int notTake = 0 + knapsackFun(dp, weight, value, n, maxWeight, i+1, currentWeight);
		
	dp[i][currentWeight] = max(take, notTake);
	return max(take, notTake);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
	
	int maxValue = knapsackFun(dp, weight, value, n, maxWeight, 0, 0);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=maxWeight; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
	return maxValue;
}
int main()
{
    vector<int> wt = {1, 2, 4, 5};
    vector<int> val = {5, 4, 8, 6};
    int W = 5;
    int n = wt.size();
    cout << knapsack(wt, val, n, W);

    return 0;
}
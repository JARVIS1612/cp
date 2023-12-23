#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {100, 180, 260, 310, 40, 535, 695};
    int buy=arr[0], max_profit = INT_MIN;
    for(int i: arr)
    {
        if(buy>i)
            buy = i;
        int profit = i - buy;
        if(profit > max_profit)
            max_profit = profit;
    }
    cout << max_profit;
    return 0;
}
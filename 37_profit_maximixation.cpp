/*
https://leetcode.com/discuss/interview-question/4102987/IBM-OA-or-SWE
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=5, price[] = {1,5,3,4,6}, profit[] = {2,3,4,5,6}, max_profit = INT_MIN;
    unordered_map<int, int> mapping;
    for(int i=0; i<n; i++)
        mapping[price[i]] = profit[i];
    
    

    return max_profit;
}
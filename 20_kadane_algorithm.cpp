/*
maximum sum of continues sub-array
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long max_sum = 0, sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum > max_sum)
            max_sum = sum;
        
        if(sum<0)
            sum = 0;
    }

    return max_sum;
}

int main()
{
   int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
   cout << maxSubarraySum(arr, 9);
   return 0;
}
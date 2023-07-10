/*
You are given an array 'arr' length 'n' containing integers from to 1 to x

Your task is to count the frequency of all elements from  1 to  n

Input: ‘n’ = 6 ‘x’ = 9 ‘arr’ = [1, 3, 1, 9, 2, 7]    
Output: [2, 1, 1, 0, 0, 0]
Explanation: Below Table shows the number and their counts, respectively, in the array
Number         Count 
 1                2
 2                1
 3                1
 4                0
 5                0
 6                0
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> arr1(n, 0);

    for(int i: nums)
    {
        if(i<=n)
        {
            arr1[i-1]++;
        }
    }

    return arr1;
}

int main()
{
     vector<int> arr1({1,3,1,9,2,7}), arr2;
     int n = 6, x = 9;
     arr2 = countFrequency(n, x, arr1);

     for(auto x: arr2)
          cout << x << " ";

     return 0;
}
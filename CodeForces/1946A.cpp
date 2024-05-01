#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int medianOfArray(vector<int> arr, int n)
{
    if(n==1) return 1; // Corrected: return 0 for an array of size 1
   sort(arr.begin(), arr.end());

   int medianIdx = (n % 2 == 0) ? (n / 2) - 1 : (n / 2); // Corrected: Calculate median index properly
    int steps = 0;
    for(int i = medianIdx; i < n; i++)
    {
        if(arr[medianIdx] == arr[i])
            steps++;
    }
    return steps;
}


int main()
{
    long long testcases;
    cin >> testcases;
    for(int test=0; test<testcases; test++)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int t;
            cin >> t;
            arr.push_back(t);
        }

        cout << medianOfArray(arr, n) << endl;
    }
    return 0;
}
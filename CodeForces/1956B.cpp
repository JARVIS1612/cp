#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long neneAndTheCardGame(vector<int> arr, int n)
{
    unordered_map<int, int> count_map;
    int res = 0;
    for(int i: arr)
    {
        if(count_map.find(i)==count_map.end())
        
            count_map[i] = 1;
        else
            count_map[i]++;
        
        if(count_map[i]==2)
            res++;
    }
    return res;
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
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        cout << neneAndTheCardGame(arr, n) << endl;
    }
    return 0;
}
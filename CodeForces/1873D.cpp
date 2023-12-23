// https://codeforces.com/problemset/problem/1873/D

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;

ll solution(int n, int k, string string_)
{
    int count = 0, i=0;
    
    cout << string_.find("B",0) << endl;
    i++;

    return count;
}

int main()
{
    ll testcases=1;
    // cin >> testcases;
    for(int i=0; i<testcases; i++)
    {
        int n, k;
        cin >> n;
        cin >> k;
        string string_;
        for(int i=0; i<n; i++)
        {
            cin >> string_;
            cout << solution(n, k, string_) << endl;
        }

    }
    return 0;
}
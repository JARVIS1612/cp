// https://codeforces.com/problemset/problem/1879/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll solution(int n, ll s[], ll e[])
{
    ll w, min_weight, min_endurance;
    min_weight = s[0];
    min_endurance = e[0];

    for(int i=1; i<n; i++)
    {
        if(s[i]>=min_weight && e[i]>=min_endurance)
            return -1;
    }

    return min_weight;
}

int main()
{
    ll testcases;
    cin >> testcases;
    for(int i=0; i<testcases; i++)
    {
        int n;
        cin >> n;
        ll s[n], e[n];
        for(int i=0; i<n; i++)
        {
            cin >> s[i];
            cin >> e[i];
        }

        cout << solution(n, s, e) << endl;
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "12534";
    int n=str.length(), breakpoint = n - 2;
    while(breakpoint>=0 && str[breakpoint]>=str[breakpoint+1])
        breakpoint--;
    
    if(breakpoint==-1)
    {
        reverse(str.begin(), str.end());
        cout << str;
        return 0;
    }

    int max_index = breakpoint+1;
    for(int i=breakpoint+1; i<n; i++)
    {
        if(str[i]<str[max_index] && str[i]>str[breakpoint])
            max_index = i;
    }
    swap(str[max_index], str[breakpoint]);
    sort(str.begin()+breakpoint+1, str.end());
    cout << str;
    return 0;
}
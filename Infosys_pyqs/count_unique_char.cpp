#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> map(26, 0);
    string str = "aabbccdef";
    for(char x: str)
    {
        map[x-97]++;
    }
    int count = 0;
    for(int i: map)
    {
        if(i==1)
            count ++;
    }
    cout << count;
    return 0;
}
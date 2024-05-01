#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string generateString(int n)
{
    if(n%2==1) return "NO";
    cout << "YES" << endl;
    string str = "";
    for(int i=0; i<n/2; i++)
    {
        if(i%2==0)
            str += "AA";
        else
            str += "BB";
    }
    return str;
}

int main()
{
    long long testcases ;
    cin >> testcases;
    for(int testcase = 0; testcase<testcases; testcase++)
    {
        int n;
        cin >> n;
        cout << generateString(n) << endl;
    }
    return 0;
}
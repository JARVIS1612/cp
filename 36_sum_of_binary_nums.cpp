#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a = "1010", b = "1011", ans = "";
    char carry ='0';
    int i = a.length() - 1, j = b.length() - 1;
    while(i>=0 && j>=0)
    {
        ans = (a[i]=='1'&&b[j]=='1'?carry:(a[i]=='1'||b[j]=='1')?(carry=='1'?'0':'1'):carry) + ans;
        carry = a[i]=='1'&&b[j]=='1'?'1':(a[i]=='1'||b[j]=='1'?carry:'0');
        i--;
        j--;
    }
    while(i>=0)
    {
        ans = (a[i]=='1'&&carry=='1'?'0':(a[i]=='1'||carry=='1'?'1':'0')) + ans;
        carry = a[i]=='1'&&carry=='1'?'1':'0';
        i--;
    }
    while(j>=0)
    {
        ans = (b[j]=='1'&&carry=='1'?'0':(b[j]=='1'||carry=='1'?'1':'0')) + ans;
        carry = b[j]=='1'&&carry=='1'?'1':'0';
        j--;
    }
    ans = carry=='1'?carry+ans:ans;
    cout << ans;
    return 0;
}
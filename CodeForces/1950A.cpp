#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tcs;
    cin >> tcs;
    for(int tc=0; tcs>tc; tc++)
    {
        int a,b,c;
        cin >> a ;
        cin >> b;
        cin >> c;

        if(a<b && b<c)
            cout << "STAIR\n";
        else if(a<b && b>c)
        cout << "PEAK\n";
        else
            cout << "NONE\n";
    }
    return 0;
}
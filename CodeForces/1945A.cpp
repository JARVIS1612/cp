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

        int tents = a;
        if(b%3!=0 && b%3+c<3)
        {
            cout << -1 << endl;
            continue;
        }
        tents += ceil((float)(b+c)/3.0);
        cout << tents << endl;
    }
    return 0;
}
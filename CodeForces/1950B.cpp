#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tcs;
    cin >> tcs;
    for(int tc=0; tc<tcs; tc++)
    {
        int n, m, flag1=0, flag2;
        cin >> m;
        for(int i=0; i<2*m; i++)
        {
            if(i%2==0)
                flag1 = !flag1;
            flag2 = flag1;
            for(int j=0; j<m; j++)
            {
                if(flag2)
                    cout << "##";
                else
                    cout << "..";
                flag2 = !flag2;
            }
            cout << endl;
        }
    }
    return 0;
}
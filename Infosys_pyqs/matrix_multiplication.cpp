#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m1[3][3] = {{1,2,3},{1,2,3},{1,2,3}}, m2[4][2] = {{2,2},{2,2},{2,2},{2,2}};
    int m = sizeof(m1)/sizeof(m1[0]), n = sizeof(m2[0])/sizeof(m2[0][0]), i = 0, j = 0, m3[m][n];
    if(sizeof(m1[0])/sizeof(m1[0][0])!=sizeof(m2)/sizeof(m2[0]))
    {
        cout << "Invalid";
        return 0;
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int total = 0;
            for(int k = 0; k<m; k++)
            {

                total += m1[i][k]*m2[k][j];
            }
            m3[i][j] =  total;
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
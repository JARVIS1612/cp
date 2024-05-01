#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void neneGame(vector<int> qs, vector<int> ks, int q, int k)
{
    vector<int> result;
    for(int i=0; i<qs.size(); i++)
    {
        int min_ele = *min_element(ks.begin(), ks.end());
        
        while(qs[i]>=min_ele)
            qs[i]--;
    }
    for(int i=0; i<qs.size(); i++)
        cout << qs[i] <<  " ";
    cout << endl;
}

int main()
{
    int tcs;
    cin >> tcs;
    for(int tc =0 ; tc<tcs; tc++)
    {
        int k, q;
        cin >> k;
        cin >> q;
        vector<int> ks, qs;
        for(int i=0; i<k; i++)
        {
            int temp;
            cin >> temp;
            ks.push_back(temp);
        }
        for(int i=0; i<q; i++)
        {
            int temp;
            cin >> temp;
            qs.push_back(temp);
        }

        neneGame(qs, ks, q, k);
    }
    return 0;
}
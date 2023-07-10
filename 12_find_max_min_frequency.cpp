/*

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    int lenght_v = v.size();
    sort(v.begin(), v.end());

    vector<int> number, freq;
    int count = 1;

    for(int i=0; i<lenght_v-1; i++)
    {
        if(v[i]!=v[i+1])
        {
            number.push_back(v[i]);
            freq.push_back(count);
            count = 1;
        }
        else
        {
            count++;
        }
        
    }
    number.push_back(v[lenght_v-1]);
    freq.push_back(count);

    int i, max_index = 0, min_index=0;
    
    for(int i=0; i<freq.size(); i++)
    {
        if(freq[max_index]<freq[i])
            max_index = i;
    }

    for(int i=0; i<freq.size(); i++)
    {
        if(freq[min_index]>freq[i])
            min_index = i;
    }
    
    return vector<int>{number[max_index], number[min_index]};
}

int main()
{
     vector<int> arr{1,1,2,2,3,3,4,4,4,5}, ans;
     ans = getFrequencies(arr);

     for(auto x: ans)
          cout << x << " ";
     return 0;
}
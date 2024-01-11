#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,1,1,1,1,10}, n = 6, max_count = 0;
    vector<int> aurdinary_array;
    for(int j = 0; j<n-1; j++)
    {
        if(arr[j]<arr[j+1] && (arr[j]&arr[j+1])*2<(arr[j]|arr[j+1]))
        {
            max_count = 2;
            aurdinary_array.push_back(1);
        }
        else
            aurdinary_array.push_back(0);
    }
    int count = 0;
    for(int i: aurdinary_array)
        count = i==1?count+1:0;

    cout << max(count==1?2:count*2-1, max_count);
    return 0;
}
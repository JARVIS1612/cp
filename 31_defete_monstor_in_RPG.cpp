#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n=3, initial_points=100;
    vector<int> poweri{101,100,304}, bonusi{100,1,524};
    map<int, int> mapping_array;
    for(int i=0; i<3; i++)
        mapping_array[poweri[i]] = bonusi[i];

    int count = 0;
    for(auto i: mapping_array)
    {
        if(i.first>initial_points)
        {
            break;
        }
        else
        {
            count++;
            initial_points += i.second;
        }
    }
    cout << count;
    return 0;    
}
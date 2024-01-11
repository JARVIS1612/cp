#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "796115110113721110141108", result="";
    reverse(str.begin(), str.end());
    int i=0, n=str.length();
    char buffer [sizeof(int)*8+1];
    while(i<n)
    {
        int two_digit_num = stoi(str.substr(i,2)), three_digit_num=0;
        i+=2;
        if(two_digit_num<13)
        {
            three_digit_num = two_digit_num*10 + stoi(str.substr(i,1));
            i++;
        }
        result += char(three_digit_num?three_digit_num:two_digit_num); 
    }
    cout << result;
    return 0;
}
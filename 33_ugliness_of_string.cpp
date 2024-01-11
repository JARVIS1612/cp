/*

Problem Statement :

 You have been given a string S of length N. The given string is a binary string which consists of only 0’s and ‘1’s. Ugliness of a string is defined as the decimal   number that this binary string represents.

 Example:

“101” represents 5.
“0000” represents 0.
“01010” represents 10.
 There are two types of operations that can be performed on the given string.

Swap any two characters by paying a cost of A coins.
Flip any character by paying a cost of B coins
flipping a character means converting a ‘1’to a ‘0’or converting a ‘0’ to a ‘1’.
  Initially, you have been given coins equal to the value defined in CASH. Your task is to minimize the ugliness of the string by performing the above mentioned operations on it. Since the answer can be very large, return the answer modulo 10^9+7.

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void flip(string &str, int *cash, int b)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='1' && *cash-b>=0)
        {
            str[i] = '0';
            *cash -= b;
        }
    }
}

void swap(string &str, int *cash, int a)
{
    int n = str.length(), start = 0, end = n - 1;
    while(start<end && *cash-a>=0)
    {
        while(start<n && str[start++]!='1');
        while(end>0 && str[end--]!='0');

        if(start-1<end+1)
        {
            swap(str[start-1],str[end+1]);
            *cash -= a;
        }
    }
}

int main()
{
    string str = "111011";
    int cash = 7, a = 3, b = 2, count_zeros = 0, count_ones=0;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]==0)
        {
            count_zeros++;
        }
        else
            count_ones++;
    }
    if(count_zeros>=count_ones)
    {
        swap(str, &cash, a);
        flip(str, &cash, b);
    }
    else
    {
        flip(str, &cash, b);
        cout << str << endl;
        swap(str, &cash, a);
        cout << str << endl;
    }
    cout << stoll(str, nullptr, 2)%(10^9+7);
    return 0;
}
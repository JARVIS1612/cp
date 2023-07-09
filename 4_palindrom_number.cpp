/*
Check wether the number is palindrom or not
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool palindrome(int n)
{
    string str = to_string(n);
    long end = str.length()-1;
    int start = 0;
    while(start <= end)
    {
        if(str[start]!=str[end-start])
            return false;
        start ++;
    }
    return true;
}

int main() {
     cout << palindrome(101);
    return 0;
}
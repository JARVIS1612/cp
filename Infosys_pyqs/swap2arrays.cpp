#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5,6}, b{7,8,9,10}, temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}
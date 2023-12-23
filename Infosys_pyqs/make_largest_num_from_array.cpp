#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool custom_function(int a, int b){
    string as = to_string(a), bs = to_string(b);
    if(stoi(as+bs) > stoi(bs+as))
        return true;
    return false;
}

int main()
{
    int arr[] = {1, 34, 3, 98, 9, 76, 45, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, custom_function);

    for(int i: arr)
        cout << i;
    return 0;
}
/*
Given an array of integers, rotating array of elements by k elements either left or right.

Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
Output: 9 10 11 3 7 8
*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n, k;
    cin >> n;
    vector<int> arr, arr2(n, 0);

    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cin >> k;

    for(int i=0; i<n; i++)
    {
        int temp = i-(k%n);
        if(temp<0) temp += n;
        arr2[temp] = arr[i];
    }

    cout << "\n";
    for(int x: arr2)
        cout << x << " ";
        
    return 0;
}
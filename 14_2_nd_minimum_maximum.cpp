/*
Problem Statement:
Ninja is a brilliant student in the class and hence his teacher
assigned him a problem.

He has been given an array 'A' of 'N° unique non-negative integers
and has been asked to find the second largest and second
smallest element from the array.
Your task is to return two elements (second largest and second
smallest) as another array of size 2.

Example:
Input: 'N' = 5, 'A' = [1, 2, 3, 4, 5]
Output: [4, 2]
The second largest element after 5 is 4 and the
second smallest element after 1 is 2.
*/


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int max=INT_MIN, min=INT_MAX, max_2=INT_MIN, min_2=INT_MAX;
    int nth = 2;
    while(nth--)
    {
        for(int i=0; i<n; i++)
            if(max<a[i] && a[i]!=max_2)
                max = a[i];
        max_2 = max;
        max = INT_MIN;
    }

    nth = 2;
    while(nth--)
    {
        for(int i=0; i<n; i++)
            if(min>a[i] && a[i]!=min_2)
                min = a[i];

        min_2 = min;
        min = INT_MAX;
    }
    return vector<int> {max_2, min_2};
}

int main()
{
   vector<int> arr{1,1,2,2,3,3,4,5,6}, arr2;
   arr2 = getSecondOrderElements(9,arr);
   for(int i: arr2) cout << i << " ";
}
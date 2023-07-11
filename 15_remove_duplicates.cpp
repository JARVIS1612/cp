/*
You are given a sorted integer array 'ARR' of size 'N'. You need to
remove the duplicates from the array such that each element
appears only once. Return the length of this new array.
*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int count = 1;
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]!=arr[i+1])
			count ++;
	}
	return count;
}

int main()
{
   vector<int> arr{1,1,2,2,3,3,4,5,6};
   cout << removeDuplicates(arr,9);
}
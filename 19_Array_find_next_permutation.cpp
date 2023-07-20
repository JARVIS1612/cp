#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> arr({2,1,5,4,3,0,0});
   int n = arr.size();
   int i = n-1;
 
   while(i>0 && arr[i]<=arr[i-1])
      i--;
   
   int point_idx = ((i-1)<0?0:(i-1)), min_index = i;
   int point_val = (point_idx==0?INT_MIN:arr[point_idx]);

   for(int j=i; j<n; j++)
   {
      if(arr[min_index]>arr[j] && arr[j]>point_val)
         min_index = j;
   }

   cout << i << " " << min_index;

   swap(arr[point_idx], arr[min_index]);

   sort(arr.begin()+i, arr.end());

   for(int x: arr)
      cout << x << " ";
   return 0;
}
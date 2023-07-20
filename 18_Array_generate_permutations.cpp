#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print2d(vector<vector<int>> permutations)
{
   for(auto x: permutations)
   {
      for(auto i: x)
         cout << i << " ";
      cout << "\n";
   }
}

void print(vector<int> arr)
{
   for(auto x: arr)
   {
     cout << x << " ";
   }
}

void GeneratePermutations1(vector<vector<int>> &permutations, 
                  vector<int> &arr, vector<int> &ds, vector<int> map, int n)
{
   if(ds.size()==n)
   {
      permutations.push_back(ds);  
      return;
   }
   for(int j=0; j<n; j++)
   {
      if(map[j]==0)
      {
         map[j] = 1;
         ds.push_back(arr[j]);
         GeneratePermutations1(permutations, arr, ds, map, n);
         ds.pop_back();
         map[j] = 0;
      }
   }
}


void GeneratePermutations2(vector<vector<int>> &permutations, vector<int> arr, int n, int i)
{
   if(i>=n)
   {
      permutations.push_back(arr);
      return;
   }

   for(int j=i; j<n; j++)
   {
      swap(arr[i], arr[j]);
      GeneratePermutations2(permutations, arr, n, i+1);
   }
}


int main()
{
   vector<int> arr({2,1,5,4,3,0,0}), ds, map({0,0,0});
   vector<vector<int>> permutations1, permutations2;
   GeneratePermutations1(permutations1, arr, ds, map, 7);
   GeneratePermutations2(permutations2, arr, 7, 0);
   print2d(permutations1);
   cout << "\n\n";
   print2d(permutations2);

   return 0;
}
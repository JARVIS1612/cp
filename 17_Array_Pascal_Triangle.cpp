#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print(vector<vector<int>> arr)
{
   cout << "\n";
   for(auto x: arr)
   {
      for(auto y: x)
         cout << y << " ";
   cout << "\n";
   }
}

vector<vector<int>> generate(int numRows)
{
   vector<vector<int>> arr;
   for (int i=1; i<=numRows; i++)
   {
      vector<int> temp;
      temp.push_back(1);
      for (int j=2; j<i; j++)
      { 
         temp.push_back(arr[i-2][j-2] + arr[i-2][j-1]);
      }
      if(i!=1)
         temp.push_back(1);

      arr.push_back(temp) ;
   }
   return arr;
}

int main()
{

   cout << "\n";

   vector<vector<int>> arr;

   arr = generate(5);
   print(arr);
   return 0;
}
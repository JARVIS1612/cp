#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int GCD_1(int n, int m)
{
     /*
     Brute Force Method
     Time Complexity: O(min(a,b))
     */
     int gcd=1;
     for(int i=1; i<=min(n,m); i++)
     {
          if(n%i==0 && m%i==0)
               gcd = i;
     }
     return gcd;
}

int GCD_2(int n, int m)
{
     /*
     Euclidean Method
     gcd(a,b) = gcd(a-b, b)
     complexity: O(log(min(a,b)))
     */
     if(n==0 || m==0)
          return (n==0)?m:n ;
     
     int max_ = max(n,m), min_ = min(n,m);
     return GCD_2(min_, max_ - min_);
}


int main(){
     int n1=20, n2=15;
     cout << "GCD: " << GCD_1(n1, n2) << "\n";
     cout << "GCD: " << GCD_2(n1, n2);
     return 0;
}
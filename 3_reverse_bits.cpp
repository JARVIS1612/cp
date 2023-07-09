/*
"There is a song concert going to happen in the city.
The price of each ticket is equal to the number obtained 
after reversing the bits of a given 32 bits unsigned integer"

ip = 12
op = 805306368

ip = 0
op = 0

*/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long reverseBits(long n) {
     string str_ = "";
     int length = 0, i = 31;
     string binary_string = "00000000000000000000000000000000";
     while(n>0)
     {
          int n1 = n%2;
          binary_string[i--] = to_string(n1)[0]; //string to char conversion
          n = n/2;
     }
     long reversed_numb=0;
     for(int i=31; i>=0; i--)
     {
          reversed_numb += pow(2,i)*(binary_string[i] == '0'?0:1);
     }
     return reversed_numb;
}

int main(){
     int n;
     cin >> n;
     cout << reverseBits(n);
     return 0;
}
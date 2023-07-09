/*
Sum all the divisors from 1 to n,
n = 11

1	= 1
2	= 2 1
3	= 3 1
4	= 4 2 1
5	= 5 1
6	= 6 3 2 1
7	= 7 1
8	= 8 4 2 1
9	= 9 3 1
10	= 10 5 2 1
11	= 11 1

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int sumOfAllDivisors_1(int n){
	// Write your code here.
	if(n==1)
		return 1;

	long sum = 0;
	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
			sum += i + ((n/i == i)?0:(n/i));
	}	

	return sum + sumOfAllDivisors_1(n-1);
}

int sumOfAllDivisors_2(int n)
{
     /*
     In above example we can see that,
     1 appears 11/1 = 11 times
     2 appears 11/2 = 5 times
     3 appears 11/3 = 3 times
     4 appears 11/4 = 2 times
     5 appears 11/5 = 2 times
     ....
     11 appears 11/11 = 1 time
     */
    long ans = 0;
    for(int i=1; i<=n; i++)
    {
          ans += i * (n/i);
    }
    return ans;
}

int main(){
     cout << sumOfAllDivisors_1(5) << "\n";
     cout << sumOfAllDivisors_2(5);
     return 0;
}
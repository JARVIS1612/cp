// chech whether the number is prime or not

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	// Write your code here.
	if(n==1)
		return false;

	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}


int main()
{
     cout << isPrime(11);
     return 0;
}
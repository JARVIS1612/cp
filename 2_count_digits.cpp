#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
Find the number of digits of 'n' that evenly devide 'n'

input:  n = 125
output: 2

input:  n = 336
output: 3

input:  n = 373
output: 0
*/


int countDigits(int n){  
	int count = 0, n2 = n;
	while(n>0)
	{
		int n1 = n % 10;
		if(n1!=0 && n2%n1 == 0)
			count++;
		n = n/10;
	}
	return count;
}

int main(){
     int n;
     cin >> n;
     cout << countDigits(n);
     return 0;
}
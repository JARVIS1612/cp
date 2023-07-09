/*
check whether the number is armstrong or not

input:
n = 1634
armstrong number = 1^4 + 6^4 + 3^4 + 4^4 = 1634

output:
true
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	int count = 0, n1 = n, n2 = n;
	long ast_num = 0;

	while(n)
	{
		n = n/10;
		count++;
	}

	while(n1)
	{
		int temp = n1%10;
		ast_num += pow(temp, count);
		n1 = n1/10;
	}

	return n2 == ast_num;
}

int main()
{
     cout << checkArmstrong(1634);
     return 0;
}
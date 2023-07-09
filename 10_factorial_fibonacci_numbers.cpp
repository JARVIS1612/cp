
#include <iostream>
#include <vector>

using namespace std;

vector<int> generateFibonacciNumbers(int n) {
    // Generate fibonacci numbers.
    vector<int> arr;
    if(n>=1)
        arr.push_back(0);
    if(n>=2)
        arr.push_back(1);
    if(n>=3)
    {
        for(int i=2; i<n; i++)
        {
            arr.push_back(arr[i-2] + arr[i-1]);
        }
    }
    return arr;
}

vector<long long> factorialNumbers(long long n) {
/*
     Find factorial number from 1 to n
     input: 10
     output: 1 2 6
*/
    long long mul = 1;
    vector<long long> arr;
    int i=2;
    while(mul<=n)
    {
        arr.push_back(mul);
        mul = mul*i;
        i++;
    }
    return arr;
}

int main() {
    int n = 10;
    vector<long long> numbers = factorialNumbers(n);
     vector<int> numbers1 = generateFibonacciNumbers(n);

    cout << "Factorial Numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Fibonacci Numbers: ";
    for (int num : numbers1) {
        cout << num << " ";
    }
    return 0;
}

#include<iostream>


using namespace std;

int main()
{
    int tcs;
    cin >> tcs;
    for(int tc = 0; tc < tcs; tc++)
    {
        int n, a, b;
        cin >> n;
        cin >> a;
        cin >> b;

        int price_of_two = min(b, a*2);

        cout << (n/2)*price_of_two + (n%2)*a << endl;
    }
    return 0;
}
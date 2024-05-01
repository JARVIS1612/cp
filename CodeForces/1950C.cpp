#include<iostream>
#include<string>

using namespace std;

int main()
{
    int tcs;
    cin >> tcs;
    for(int tc=0; tc<tcs; tc++)
    {
        string time_24;
        cin >> time_24;

        string hours = time_24.substr(0,2);
        string minutes = time_24.substr(3,2);
        int hours_int = stoi(hours);
        int minutes_int = stoi(minutes);
        if(hours_int>12)
        {
            hours_int-=12;
            cout << (hours_int<10?"0":"")+to_string(hours_int)+time_24.substr(2,6)+" PM" << endl;
        }
        else if(hours_int==12)
        {
            cout << "12"+time_24.substr(2,6)+" PM" << endl;
        }
        else if(hours_int==0)
            cout << "12"+time_24.substr(2,6)+" AM" << endl;
        else
        {
            cout << time_24 + " AM" << endl;
        }
    }
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
    int hour,minute,sec;
    string ap,time;
    cin>>time;
    stringstream ss(time);

    char ch;
    ss>>hour>>ch>>minute>>ch>>sec>>ap;

    if(ap=="AM")
    {

        if(hour==12)
            hour = 0;
        cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setfill('0')<<setw(2)<<sec<<endl;

    }
    else if(ap=="PM")
    {
        if(hour!=12)
            hour+=12;
        cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setfill('0')<<setw(2)<<sec<<endl;

    }
    return 0;
}


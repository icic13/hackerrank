#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long n,k,result;
    cin>>n;
    while(n-->0)
    {
        cin>>k;
        result = floor(k/2)*ceil(float(k)/2.0);
        cout<<result<<endl;

    }
    return 0;
}

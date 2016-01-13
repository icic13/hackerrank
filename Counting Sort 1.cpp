#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

    long int n,data[101],x;
    for(int i = 0; i<101; i++)
        data[i] = 0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>x;
        data[x]++;
    }
    for(int i = 0; i<100; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    int diagsum1 = 0,diagsum2  =0,j;
    cin >> n;
    j = n-1;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0; a_i < n; a_i++)
    {
        for(int a_j = 0; a_j < n; a_j++)
        {
            cin >> a[a_i][a_j];
            if(a_i==a_j)
            diagsum1+=a[a_i][a_j];
        }
        diagsum2+=a[a_i][j];
        j--;
    }
    cout<<abs(diagsum1-diagsum2)<<endl;
    return 0;
}


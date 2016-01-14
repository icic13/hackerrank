#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,wrapper,chocolate;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        chocolate = 0;
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        chocolate = n/c;
        wrapper = n/c;
        while(wrapper>=m)
        {

         chocolate =chocolate+ wrapper/m;
         wrapper = wrapper%m+ wrapper/m;
        }
        cout<<chocolate<<endl;




    }
    return 0;
}


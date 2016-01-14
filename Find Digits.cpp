#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void fd(int n)
{

    int cnt = 0,number = n;
    while(n>0)
    {
        int dig = n%10;
        if (dig!=0)
            if(number%dig==0)
                cnt++;
        n/=10;
    }
    cout<<cnt<<endl;


}
int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        fd(n);
    }
    return 0;
}

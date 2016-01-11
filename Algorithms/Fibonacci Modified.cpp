#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int modifiedFib(int a,int b,int n)
{
    if(n==0) return a;
    else if(n==1) return b;
    else return (int)pow(modifiedFib(a,b, n-1 ),2) + modifiedFib(a,b ,n-2 );

}

int main()
{

    int a,b,n;
    cin>>a>>b>>n;
    cout<<modifiedFib(a,b,n)<<endl;
    return 0;
}

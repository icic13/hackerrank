#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 */
int maxXor(int l, int r)
{

    int n = l^r;
    if(n<0)
        n = ~n;
    int x= n>>1;
    n|= x;
    n|= n>>2;
    n|= n>>4;
    n|= n>>8;
    n|= n>>16;
    return n;
}

int main()
{
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}



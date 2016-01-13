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
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar)
{
    int x = ar[0];
    vector<int>L,R;

    for(int i = 0; i<ar.size(); i++)
    {

        if(x>ar[i])
            L.push_back(ar[i]);
        else if(x<ar[i])
            R.push_back(ar[i]);
    }
    for(int i = 0; i<L.size(); i++)
        cout<<L[i]<<" ";
    cout<<x<<" ";
    for(int i = 0; i<R.size(); i++)
        cout<<R[i]<<" ";
    cout<<endl;
}
int main(void)
{
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++)
    {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    partition(_ar);

    return 0;
}


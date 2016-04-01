#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n,pos = 0,neg = 0,zero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]==0)
        zero++;
       else if(arr[arr_i]>0)
        pos++;
       else
        neg++;
    }
    cout<<fixed<<setprecision(6)<<float(pos)/n<<endl;
    cout<<fixed<<setprecision(6)<<float(neg)/n<<endl;
    cout<<fixed<<setprecision(6)<<float(zero)/n<<endl;
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    char a;
    for(int i = 0; i<n;i++){
            if(isalpha(s[i])){
                    a = isupper(s[i])?'A':'a';
                    s[i] = a + (s[i]-a+k)%26;

            }
    }
    cout<<s<<endl;

    return 0;
}

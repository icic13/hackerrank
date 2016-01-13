#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
using namespace std;


int main()
{
    string str;
    char ch;
    set<char> s;
    getline(cin,str);
    for(int i = 0; i<str.size(); i++)
    {
        ch = tolower(str[i]);
        if(isalpha(ch))
            s.insert(ch);

    }
    if(s.size()==26)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;


    return 0;
}


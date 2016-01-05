#include <iostream>
using namespace std;


int main()
{
    int V,ar[1000],n,pos= 0;
    cin>>V;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]==V)
            pos = i;
    }
    cout<<pos<<endl;

    return 0;
}

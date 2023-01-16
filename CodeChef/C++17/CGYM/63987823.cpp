#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long

//////////////////////////////////////////////////////
//////////////////////////////////////////////

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll xiaoo,yelan,zeus;
        cin >> xiaoo>>yelan>>zeus;
        if(xiaoo+yelan<=zeus) cout<<"2\n";
        else if(xiaoo<=zeus && xiaoo+yelan>zeus) cout<<"1\n";
        else cout<<"0\n";
        
    }
    return 0;
}

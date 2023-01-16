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
        ll xiaoo, yelan;
        cin >> xiaoo>>yelan;
        if(xiaoo*100>=yelan*10) cout<<"ClotH\n";
        else cout<<"DisposablE\n";
        
    }
    return 0;
}

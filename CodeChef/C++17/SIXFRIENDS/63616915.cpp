#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll diluc,tartag; cin>>diluc>>tartag;
        if(3*diluc>=2*tartag) std::cout <<  2*tartag<< std::endl;
        else cout<<3*diluc<<endl;
    }
    return 0;
}

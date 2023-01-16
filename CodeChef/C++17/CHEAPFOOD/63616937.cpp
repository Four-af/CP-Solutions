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
        ll noellee;
        cin >> noellee;
       if(0.1*noellee>100) std::cout << 0.1*noellee << std::endl;
       else cout<<100<<endl;
    }
    return 0;
}

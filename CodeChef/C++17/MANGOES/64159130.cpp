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
        ll xiao,yelan,zeus;
        cin >> xiao>>yelan>>zeus;
        std::cout << (zeus-yelan)/xiao << std::endl;
        
    }
    return 0;
}

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
        ll albedo, beidou;
        cin>>albedo>>beidou;
        if(albedo*10==beidou*5) std::cout << "Any" << std::endl;
        else if(albedo*10>beidou*5) cout<<"FirSt\n";
        else cout<<"SeCoNd\n";
    }
    return 0;
}

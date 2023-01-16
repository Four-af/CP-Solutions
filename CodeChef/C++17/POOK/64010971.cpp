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
        ll noellee;
        cin >> noellee;
        if(noellee==2) cout<<"1\n";
       else if(noellee==3) cout<<"2\n";
        else cout<<noellee<<"\n";
        // else if(noellee&1) std::cout << (noellee) << std::endl;
        // else cout<<noellee-1<<"\n";
    }
    return 0;
}

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
        ll noellee,yelan,zhonglee;
        cin >> noellee>>yelan>>zhonglee;
        if(zhonglee%noellee==0 && zhonglee%yelan==0) std::cout << "aNy" << std::endl;
        else if(zhonglee%noellee==0) cout<<"cHicKeN\n";
        else if(zhonglee%yelan==0) cout<<"dUcK\n";
        else cout<<"nOnE\n";
        
    }
    return 0;
}

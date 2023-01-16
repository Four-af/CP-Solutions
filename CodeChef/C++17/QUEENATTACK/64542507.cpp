#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vch vector<char>

//////////////////////////////////////////////////////
//////////////////////////////////////////////
int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noellee,xiao,yelan;
        cin >> noellee>>xiao>>yelan;
        ll monaaa=min(xiao - 1, yelan - 1);
        ll magistus=min(xiao - 1, noellee - yelan);
        ll kaedehahara=min(noellee - xiao, noellee - yelan);
        ll kazuha= min(noellee - xiao, yelan - 1);
        cout<<(monaaa+magistus)+(kaedehahara+kazuha)+((noellee-1)*2)<<"\n";
        

        // 2345521
        // 11 000 1111 00000 11111 00 1
        // 4
        //time_req = clock() - time_req;
        //cout << "\n:: " << (float)time_req / CLOCKS_PER_SEC;
        // 11 000 0110 00000 11111 11 1
    } // n/n-4
    return 0;
}

// 5000*
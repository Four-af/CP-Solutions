#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vch vector<char>
#define MMMM 1e9 + 7
//////////////////////////////////////////////////////

//////////////////////////////////////////////
int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {

        // clock_t time_req = clock();
        ll noellee, qiqi, lynnn, raiden = INT_MAX;
        cin >> noellee >> qiqi>>lynnn;
        if(noellee> qiqi+lynnn) cout<<"yEs\n";
        else if(qiqi> noellee+lynnn) cout<<"yEs\n";
        else if(lynnn> noellee+qiqi) cout<<"yEs\n";
        else cout<<"nO\n";
        
        // 2345521
        // 11 000 1111 00000 11111 00 1s
        // 4
        // time_req = clock() - time_req;
        // cout << "\n:: " << (float)time_req / CLOCKS_PER_SEC;
        // 11 000 0110 00000 11111 11 1
    } // n/n-4
    return 0;
}

// 5000*
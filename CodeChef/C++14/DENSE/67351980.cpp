#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define amz fourrr
#define vll vector<long long>
#define ll long long
ll k = 10000;
#define pb push_back

void cffffaimzzz()
{
    ll noellleee;
    cin >> noellleee;
    string hutaoooo;
    cin >> hutaoooo;
    ll arigatooo = 0;
    ll i = 0, j = noellleee - 1;
    // ( ( ( ) ) ) ( )
    // i             j   arigatooo=0
    //   i         j
    //   i       j       arigatooo=1
    //     i   j
    //       ij
    while (i <= j)
    {
        if (i == j)
        {
            arigatooo++;
            break;
        }
        else if (hutaoooo[i] == ')' && hutaoooo[j] == '(')
        {
            arigatooo += 2;
            i++;
            j--;
        }

        else if (hutaoooo[i] == '(' && hutaoooo[j] == ')')
        {
            i++;
            j--;
        }
        else if (hutaoooo[i] == ')' && hutaoooo[j] == ')')
        {
            arigatooo++;
            i++;
        }
        else if (hutaoooo[i] == '(' && hutaoooo[j] == '(')
        {
            arigatooo++;
            j--;
        }
    }
    cout << arigatooo << "\n";
}

int main()
{

    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        cffffaimzzz();
    }

    return 0;
}
// 3 6 8 13 15 15
// 3 4 4 4 4
// 3 3 4 4 4 5 5
// 2 1 4 5 3 7 6
// 3 3 4 4 4
// 2 1 5 3 4
// 5 5
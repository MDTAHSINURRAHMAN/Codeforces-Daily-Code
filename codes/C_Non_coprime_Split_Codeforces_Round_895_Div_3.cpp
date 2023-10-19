#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define isinf = 0x3f3f3f3f;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fl(i, m, n) for (int i = m; i < n; ++i)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define vr(v) v.begin(), v.end()
#define HERE ios_base::sync_with_stdio(false);
#define WE cin.tie(NULL);
#define GO cout.tie(NULL);
using namespace std;

/*
MD Tahsinur Rahman
Department of Computer Science and Engineering
Khulna University of Engineering & Technology

In life everybody has a turn back moment. You have the moment where you can go forward or you can give up. But the thing you have to keep in mind before you give up is that if you give up, the guarantee is it will never happen. That's the guarantee it will never happen under the sun! THE ONLY WAY THE POSSIBILITY REMAINS, THAT IT CAN BE HAPPEN IS IF YOU NEVER GIVE UP NO MATTER WHAT.
*/

int getPrime(int a)
{
    if (a % 2 == 0)
    {
        return 2;
    }
    else
    {
        for (int i = 3; i <= sqrt(a); i += 2)
        {
            if (a % i == 0)
            {
                return i;
            }
        }
    }
    return a;
}

void solve()
{
    int l, r;
    cin >> l >> r;
    if (r <= 3)
    {
        cout << -1 << '\n';
        return;
    }
    else if (l < r)
    {
        if (r % 2 == 0)
        {
            cout << 2 << " " << r - 2 << '\n';
            return;
        }
        else
        {
            cout << 2 << " " << r - 3 << '\n';
            return;
        }
    }
    else if (l == r)
    {
        int prime = getPrime(l);
        if (prime == l)
            cout << -1 << '\n';
        else
            cout << prime << " " << l - prime << '\n';
    }
}

int main()
{
    HERE WE GO
        ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
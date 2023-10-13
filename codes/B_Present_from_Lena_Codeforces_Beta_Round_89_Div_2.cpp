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

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n + 1; ++i)
    {
        int x = -1;
        for (int j = 1; j <= 2 * n + 1; ++j)
        {
            if (j <= (n + 1 - i))
                cout << " ";
            else if (j <= n + 1)
                cout << ++x << " ";
            else if (j <= n + 1 + i - 1)
                cout << --x << " ";
            else
                cout << " ";
        }
        cout << '\n';
    }
    for (int i = n; i > 0; --i)
    {
        int x = -1;
        for (int j = 1; j < 2 * n + 1; ++j)
        {
            if (j <= n + 1 - i)
                cout << " ";
            else if (j <= n + 1)
                cout << ++x << " ";
            else if ((j <= n + 1 + i - 1))
                cout << --x << " ";
            else
                cout << " ";
        }
        cout << '\n';
    }
}

int main()
{
    HERE WE GO
        ll tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
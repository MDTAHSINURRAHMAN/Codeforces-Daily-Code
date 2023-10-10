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
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    fl(i, 1, n + 1) cin >> a[i];
    fl(i, 1, n + 1) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int a_min = a[1];
    int b_min = b[1];
    ll sum_1 = 0;
    ll sum_2 = 0;
    fl(i, 1, n + 1)
    {
        sum_1 += (ll)(b_min + a[i]);
    }
    fl(i, 1, n + 1)
    {
        sum_2 += (ll)(a_min + b[i]);
    }
    cout << min(sum_1, sum_2) << '\n';
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
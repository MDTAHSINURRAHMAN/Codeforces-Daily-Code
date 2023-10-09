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
// #define py cout << "YES\n"
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

long double dist(ll x1, ll y1, ll x2, ll y2)
{
    return sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void solve()
{
    ll px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;
    long double assumption_one = dist(0ll, 0ll, ax, ay);
    assumption_one = max(assumption_one, dist(ax, ay, px, py));
    long double assumption_two = dist(0ll, 0ll, bx, by);
    assumption_two = max(assumption_two, dist(bx, by, px, py));
    long double assumption_three = dist(0ll, 0ll, ax, ay);
    assumption_three = max(assumption_three, dist(bx, by, px, py));
    assumption_three = max(assumption_three, dist(ax, ay, bx, by) / 2);
    long double assumption_four = dist(0ll, 0ll, bx, by);
    assumption_four = max(assumption_four, dist(ax, ay, px, py));
    assumption_four = max(assumption_four, dist(ax, ay, bx, by) / 2);

    long double w = min(assumption_one, min(assumption_two, min(assumption_three, assumption_four)));

    cout << fixed << setprecision(10) << w << '\n';
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
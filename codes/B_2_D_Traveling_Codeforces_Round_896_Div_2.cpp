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

ll cal_dis(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return (abs(a.f - b.f) + abs(a.s - b.s));
}

void solve()
{
    ll city, major_city, src, des;
    cin >> city >> major_city >> src >> des;
    vector<pair<ll, ll>> v(city + 1);
    fl(i, 1, city + 1)
    {
        cin >> v[i].f >> v[i].s;
    }
    ll cost = cal_dis(v[src], v[des]);
    ll src_to_major_city = 1e10, major_city_to_des = 1e10;
    fl(i, 1, major_city + 1)
    {
        src_to_major_city = min(src_to_major_city, cal_dis(v[i], v[src]));
        major_city_to_des = min(major_city_to_des, cal_dis(v[i], v[des]));
    }
    cost = min(cost, (src_to_major_city + major_city_to_des));
    cout << cost << '\n';
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
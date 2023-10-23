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
    int n, lunch_time;
    cin >> n >> lunch_time;
    vector<int> dur_vdo(n + 1), ent_val(n + 1);
    fl(i, 1, n + 1) cin >> dur_vdo[i];
    fl(i, 1, n + 1) cin >> ent_val[i];
    int max_idx = 0, ent_max_val = 0;
    fl(i, 1, n + 1)
    {
        if (dur_vdo[i] <= lunch_time && ent_val[i] >= ent_max_val)
        {
            max_idx = i;
            ent_max_val = ent_val[i];
        }
        lunch_time--;
    }
    if (!max_idx)
        cout << -1 << '\n';
    else
        cout << max_idx << '\n';
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
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
    string s;
    cin >> s;
    vector<int> v;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        v.pb(s[i] - '0');
    }
    int index = 0;
    ll cnt = 0;
    vector<ll> ans;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 0)
        {
            cnt += ((ll)i - index);
            ans.pb(cnt);
            index++;
        }
    }
    int extra_size = n - ans.size();
    for (int i = 0; i < extra_size; ++i)
    {
        ans.pb(-1);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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
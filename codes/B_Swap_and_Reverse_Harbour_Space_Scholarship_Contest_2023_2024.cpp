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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> odd, even;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            even.pb(s[i]);
        else
            odd.pb(s[i]);
    }
    string ans = "";
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    for (int i = 0, j = 0; i < odd.size() || i < even.size(); ++i, ++j)
    {
        if (i < even.size())
            ans += even[i];
        if (j < odd.size())
            ans += odd[i];
    }
    if (k % 2 == 0)
    {
        sort(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    else
    {
        cout << ans << '\n';
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
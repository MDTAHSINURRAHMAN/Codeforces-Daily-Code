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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    fl(i, 0, n)
    {
        cin >> a[i];
    }
    int all_OR_result = 0;
    fl(i, 0, m)
    {
        int b;
        cin >> b;
        all_OR_result |= b;
    }
    int check_one = 0, check_two = 0;
    fl(i, 0, n)
    {
        check_one ^= a[i];
        check_two ^= (a[i] | all_OR_result);
    }
    if (n & 1)
        cout << check_one << " " << check_two << '\n';
    else
        cout << check_two << " " << check_one << '\n';
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
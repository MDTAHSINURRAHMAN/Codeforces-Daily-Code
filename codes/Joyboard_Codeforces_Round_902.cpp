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
    ll slot, not_bigger, distinct_values;
    cin >> slot >> not_bigger >> distinct_values;
    ll possible_ways = 0;
    if (distinct_values == 1)
    {
        possible_ways = 1;
    }
    else if (distinct_values == 2)
    {
        if (!not_bigger)
        {
            possible_ways = 0;
        }
        else if (not_bigger <= slot)
        {
            possible_ways = not_bigger;
        }
        else
        {
            possible_ways = slot + (not_bigger - slot) / slot;
        }
    }
    else
    {
        if (distinct_values > 3)
        {
            possible_ways = 0;
        }
        else if (not_bigger <= slot)
        {
            possible_ways = 0;
        }
        else
        {
            possible_ways = (not_bigger - slot) - (not_bigger - slot) / slot;
        }
    }
    cout << possible_ways << '\n';
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
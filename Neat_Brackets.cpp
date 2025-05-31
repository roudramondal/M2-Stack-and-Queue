/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 01 / 2025
   Time  : 00:27
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define pll pair<ll, ll>

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s;
    cin >> s;
    stack<char> st;
    bool valid = true;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else {
            if (st.empty()) {
                valid = false;
                break;
            } else {
                st.pop();
            }
        }
    }

    if (!st.empty()) valid = false;

    if (valid) {
        cout << "Yes" << nl;
    } else {
        cout << "NO" << nl;
    }
}

int main() {
    fast_io;
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}

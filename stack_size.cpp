/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 31 / 2025
   Time  : 11:02
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define pll pair<<ll ,ll>

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // code here 
    stack <int>st;
    st.push (1);
    st.push (2);
    st.push (3);
    st.pop();
    cout<<st.top()<<"   size = "<<st.size()<<nl;
    st.push(5);
    cout<<st.top()<<nl;
    cout<<st.size()<<nl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
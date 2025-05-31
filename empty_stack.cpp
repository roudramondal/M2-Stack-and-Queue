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
    st.pop();
    st.pop();
    if (st.size()==0)
    {
        cout<<"Stack is empty"<<nl;
    }
    else
    {
        cout<<"Stack is  not  empty"<<nl;
    }
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

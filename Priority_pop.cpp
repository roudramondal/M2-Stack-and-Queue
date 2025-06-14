/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 13 / 2025
   Time  : 14:07
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
     priority_queue<int>pq;
    pq.push(4);
    pq.push(10);
    pq.push(5);
    pq.pop ();
    cout<<pq.top()<<nl; // find the first value
    pq.push(13);
    pq.push (15);
    pq.pop ();
    pq.pop ();
    cout<<pq.top()<<nl;// same value print double time
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

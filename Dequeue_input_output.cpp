/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 07 / 2025
   Time  : 10:46
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
    deque<int>dq;
    dq.push_front(1);
    dq.push_back(4);
    dq.push_front(3);
    dq.pop_back();
    dq.push_back(8);
    dq.push_back(7);
    dq.pop_front();
    dq.push_back(9);

    cout<<dq.size()<<nl;

    for (auto it :dq){
        cout<<it<<nl;
    }

    cout<<dq.front()<<" Other "<<dq.back()<<nl;

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
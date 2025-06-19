/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 19 / 2025
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
    priority_queue<int>pq;
    pq.push(34);
    pq.push(45);
    pq.push(12);
    cout<<"size = "<<pq.size()<<nl;
    pq.pop();
    pq.pop();
    pq.pop();
    cout<<"size after pop "<<pq.size()<<nl;
    cout<<"top element "<<pq.top ()<<nl;

    if (pq.size()==0)
    {
        cout<<"empty"<<nl;
    }
    if (pq.empty())
    {
        cout<<"empty"<<nl;
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
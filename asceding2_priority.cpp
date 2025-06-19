/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 19 / 2025
   Time  : 16:30
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
    // without using comparator ascending order
    vector<int> v={5,3,4,0,-1,-8,4};
    priority_queue<int>pq;
    // pq.push(-5);
    // pq.push(-3);
    // pq.push(-4);
    // pq.push(-6);
    for (auto x :v)
    {
        pq.push(-x);
    }
    // cout<<-pq.top()<<nl;
    // pq.pop();
    // cout<<-pq.top()<<nl;
    while (pq.size()>0)
    {
        cout<<-pq.top()<<" ";
        pq.pop();
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
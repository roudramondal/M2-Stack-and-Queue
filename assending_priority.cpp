/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 19 / 2025
   Time  : 11:53
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
   // priority_queue<int>x;
    // priority_queue<int,vector<int>,greater<int>>pq;
    // pq.push(43);
    // pq.push(32);
    // pq.push(23);
    // pq.push(100);
    // cout<<pq.top()<<nl;
    // also use string 
    //priority_queue<string,vector<string>,greater<string>>pq;
    //priority_queue<string,vector<string>,less<string>>pq;
    // pq.push("abc");
    // pq.push("xyz");
    // pq.push("pqr");
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({1,3});
    pq.push({33,23});
    pq.push({21,45});
    cout<<pq.top().first<<" "<<pq.top().second<<nl;
    pq.pop();
    cout<<pq.top().first<<" "<<pq.top().second<<nl;
    pq.pop();
    cout<<pq.top().first<<" "<<pq.top().second<<nl;
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
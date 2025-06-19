/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 19 / 2025
   Time  : 17:05
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
    vector<int> v={3,1,2,4,4,2,1,1,1,3,3,8};
    map <int,int>fre;
    for (auto x : v)
    {
        fre[x]++;
    }
    // for (auto it : fre)
    // {
    //     cout<<it.first <<" = "<<it.second<<nl;
    // }
    // Frequency priority Queue use
    //priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    //for (auto it : fre)
    // {
    //     pq.push({it.second,it.first});
    // }

    // while (pq.size ()>0)
    // {
    //     int value = pq.top ().second; // here value and frequency both are negative 
    //     int frequency = pq.top().first;
    //     cout<<value<<" = "<<frequency<<nl;
    //     //cout<<pq.top().second <<" = "<<pq.top().first<<nl;
    //     pq.pop();
    // }
    // without using comparator
    priority_queue<pair<int,int>>pq;
    for (auto it : fre)
    {
        pq.push({-it.second,-it.first});
    }

    while (pq.size ()>0)
    {
        int value = -pq.top ().second; // here value and frequency both are negative 
        int frequency = -pq.top().first;
        cout<<value<<" = "<<frequency<<nl;
        //cout<<pq.top().second <<" = "<<pq.top().first<<nl;
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
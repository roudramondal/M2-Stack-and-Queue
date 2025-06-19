/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 19 / 2025
   Time  : 11:27
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
    vector<int>v = {53,2,35,55,34,556};
    priority_queue<int>pq;
    for (auto x :v)
    {
        pq.push(x);
    }
    vector<int>sorted;
    while (pq.size()>0)
    {
        sorted.push_back(pq.top());
        pq.pop();
    }
    // sorted is now in assending order
    //reverse (all (sorted));
    // also i have another way to sort the vector
    reverse (sorted.begin(),sorted.end());
    for (auto v : sorted)
    {
        cout<<v<<" ";
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

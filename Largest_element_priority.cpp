/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 19 / 2025
   Time  : 17:53
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
    // using vector solution
    int k =4;
    vector<int> v={6,1,4,3,9,2};
    // sort(v.rbegin(),v.rend());// r(revese) means descending order
    // cout<<v[k-1]<<nl;
   

    // using comparator priority queue solution 
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for (auto x : v){
//         pq.push(x);

//         if (pq.size()>k){
//             pq.pop();
//         }

//     }
//    cout<<pq.top()<<nl;

 // without using comparator
 priority_queue<int>pq;
    for (auto x : v){
        pq.push(-x);

        if (pq.size()>k){
            pq.pop();
        }

    }
   cout<<-pq.top()<<nl;

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
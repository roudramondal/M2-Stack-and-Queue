/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 31 / 2025
   Time  : 11:58
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
    int n,q;
    cin>>n>>q;
    stack <int> s[n];
    while (q--){
        int type;
        cin>>type;
        if (type==0)
        {
            int t,x;
            cin>>t>>x;
            s[t].push(x);
        }
        else
        {
            int t;
            cin>>t;
            if (type ==1)
            {
                if (s[t].empty())continue;
                else cout<<s[t].top()<<endl;
            }
            else
            {
                if (s[t].empty())continue;
                else s[t].pop();
            }
        }
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
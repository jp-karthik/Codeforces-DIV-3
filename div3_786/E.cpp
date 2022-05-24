#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long, long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<long long, long long>> vpll;

#define PB push_back
#define REP(i, a, b) for(int i=a; i<=b; i++)
#define sort(v) sort(v.begin(), v.end())

bool dec(int x, int y) {
    return x>y;
}
bool inc(int x, int y) {
    return x<y;
}

void solve() {
    int n;
    cin>>n;
    vll v(n);
    vll temp;
    REP(i, 0, n-1) cin>>v[i];  
    temp = v;
    sort(temp);
    ll res = (temp[0]+1)/2 + (temp[1]+1)/2; 
    for (int i=1; i<n-1; i++) {
        ll curr = (v[i-1]+v[i+1]+1)/2;
        if (res > curr) {
            res = curr;
        }
    }
    for (int i=0; i<n-1; i++) {
        ll x = max(v[i], v[i+1]);
        ll y = min(v[i], v[i+1]);
        if ( x < 2*y ) {
            ll temp = x-y;
            x -= 2*temp;
            y -= temp;
            temp += (x+y+2)/3;
            if (res > temp) {
                res = temp;
            }
        } else {
            if (res > (x+1)/2) {
                res = (x+1)/2;
            }
        }
    }
    cout<<res<<endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    solve();
    return 0;
}
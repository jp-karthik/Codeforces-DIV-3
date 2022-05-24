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

void solve(int arg) {
    int n;
    cin>>n;

    vll v(n);
    REP(i, 0, n-1) cin>>v[i];

    int c = n-1;
    int bs = 0;

    ll m1 = LLONG_MAX, m2 = LLONG_MAX;

    while (c >= 0) {
        ll val = v[c]; 
        if (bs%2 == 0) {
            if (val <= m1) {
                m2 = m1;
                m1 = val;
                bs++;
                c--;
                continue;
            } else {
                cout<<"NO"<<endl;
                return;
            }
        } else {
            if (val <= m2) {
                m2 = max(val, m1);
                m1 = min(val, m1);
                bs++;
                c--;
                continue;
            } else {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    int arg = 1;
    cin>>t;
    while(t > 0) {
        solve(arg);
        t--;
        arg++;
    };
    return 0;
}
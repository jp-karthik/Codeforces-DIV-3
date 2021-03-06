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
    int x, y;
    cin>>x>>y;
    if (y == x) {
        cout<<1<<" "<<1<<endl;
        return;
    }
    if (y < x) {
        cout<<0<<" "<<0<<endl;
        return;
    }
    if (y%x == 0) {
        cout<<1<<" "<<(y/x)<<endl;
        return;
    } else {
        cout<<0<<" "<<0<<endl;
        return;
    }

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
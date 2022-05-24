#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define PB push_back;
#define REP(i, a, b) for(int i=a; i<=b; i++)
int Cal(int x, int a) {
    return (x%a) + (int)(x/a);
}
void solve() {
    int l, r, a;
    cin>>l>>r>>a;
    int best;
    if (l/a == r/a) {
        best = r/a + r%a;
    } else {
        best = max(r/a + r%a, r/a + a -2);
    }
    cout<<best<<endl;
}
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t > 0) {
        solve(); 
        t--;
    };
    return 0;
}
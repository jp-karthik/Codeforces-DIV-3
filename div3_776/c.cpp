#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define PB push_back;
#define REP(i, a, b) for(int i=a; i<=b; i++)
void solve() {
    int n, m;
    cin>>n>>m;
    vector<pair<pair<int,int>, int>> stones(m);
    REP(i, 0, m-1) {
        cin>>stones[i].first.second>>stones[i].first.first;
        stones[i].second = i+1;
    }
    sort(stones.begin(), stones.end());
    int sysWeight = 0;
    vector<pair<int, int>> ans(2*n);
    for(int i=0; i<2*n; i++) {
        ans[i].first = stones[i].first.second;
        ans[i].second = stones[i].second;
        sysWeight += stones[i].first.first;
    }
    sort(ans.begin(), ans.end());
    cout<<sysWeight<<endl;
    for (int i=0 ; i<n; i++) {
        cout<<ans[i].second<<" "<<ans[2*n-i-1].second<<endl;
    }
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
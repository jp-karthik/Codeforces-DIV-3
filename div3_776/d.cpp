#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define PB push_back;
#define REP(i, a, b) for(int i=a; i<=b; i++)
void solve() {
    int n;
    cin>>n;
    vi nums(n);
    REP(i, 0, n-1) cin>>nums[i];
    vi ans(n);
    for (int i = n; i>=1; i--) {
        int j;
        for (j=0; j<i; j++) {
            if (nums[j] == i) {
                break;
            }
        }
        rotate(nums.begin(), nums.begin() + (j+1)%i, nums.end()-(n-i));
        ans[i-1] = (j+1)%i;
    }
    REP(i, 0, n-1) cout<<ans[i]<<" ";
    cout<<endl;
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
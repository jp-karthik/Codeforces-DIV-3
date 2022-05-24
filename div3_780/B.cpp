#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;
#define PB push_back;
#define REP(i, a, b) for(int i=a; i<=b; i++)
//------------------
bool decrease(int x, int y) {
    return x>y;
}
bool increase(int x, int y) {
    return x<y;
}
//-----------------
void solve() {
    int n;
    cin>>n;
    vi nums(n);
    REP (i, 0, n-1) cin>>nums[i];
    if (n==1) {
        if (nums[0] == 1) {
            cout<<"YES"<<endl;
            return;
        } else {
            cout<<"NO"<<endl;
            return;
        }
    }
    sort(nums.begin(), nums.end(), decrease);
    if (nums[0]-nums[1] <= 1) {
        cout<<"YES"<<endl; 
    } else {
        cout<<"NO"<<endl;
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
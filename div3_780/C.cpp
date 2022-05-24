#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
#define PB push_back;
#define REP(i, a, b) for(int i=a; i<=b; i++)
//------------------
bool dec(int x, int y) {
    return x>y;
}
bool inc(int x, int y) {
    return x<y;
}
//-----------------

int getMin(string& s, int x, vector<int>& dp) {
    if (dp[x] != -1) {
        return dp[x];
    }
    if (s.length() == x) {
        return dp[x] = 0;
    }
    if (s.length()-1 == x) {
        return dp[x] = 1;
    }
    if(s[x] == s[x+1]) {
        return dp[x] = getMin(s, x+2, dp);
    }
    char curr = s[x];
    int itr = x+1;
    bool present = 1;
    while (s[itr] != curr) {
        if (itr == s.length()) {
            present = 0;
            break;
        } 
        itr++;
    }
    if (present == 1) {
        return dp[x] = min(itr-x-1+getMin(s, itr+1, dp), 1+getMin(s, x+1, dp));
    }
    return dp[x] = 1+getMin(s, x+1, dp);
}
void solve() {
    string s;
    cin>>s;
    vector<int> dp(200005, -1);
    dp[s.length()-1] = 1;
    dp[s.length()] = 0;
    int res = getMin(s, 0, dp);
    cout<<res<<endl;
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
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
#define rep(i, a, b) for(int i=a; i<=b; i++)
#define sort(v) sort(v.begin(), v.end())
#define endl "\n"

bool dec(int x, int y) {
    return x>y;
}
bool inc(int x, int y) {
    return x<y;
}
vi dfs(vector<vector<int>>& res, vector<vector<int>>& adj, int node, bool root) {
    vi temp;
    temp.PB(node);
    if (!adj[node].size()) {
        if (root) {
            res.PB(temp);
        }
        return temp;
    }
    if (adj[node].size()) {
        vi cp = dfs(res, adj, adj[node][0], 0);
        for (auto x : cp) {
            temp.PB(x);
        }
    }
    if (root) {
        res.PB(temp);
    }
    for (int i=1; i<adj[node].size(); i++) {
        dfs(res, adj, adj[node][i], 1);
    }
    return temp;
}
void solve(int arg) {
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    vector<vector<int>> res;
    vi visited(n+1, 0);
    int root;
    rep(i, 1, n) {
        int x;
        cin>>x;
        if (x == i) {
            root = i;
            continue;
        }
        adj[x].PB(i);
    }
    dfs(res, adj, root, 1);
    cout<<res.size()<<endl;
    for (auto v : res) {
        cout<<v.size()<<endl;
        for (auto x : v) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
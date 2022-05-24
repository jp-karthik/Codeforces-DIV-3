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

void solve(int arg) {
    int n;
    cin >> n;
    vi p(n+1);
    vector<bool> l(n+1, true);
    vector<bool> v(n+1, false);
    rep(i, 1, n) {
        cin >> p[i];
        if (p[i] != i) {    
            l[p[i]] = false;
        }
    }
    cout<<count(l.begin()+1, l.end(), true)<<endl;
    for (int i=1; i<=n; i++) {
        if (!v[i]) {
            if (l[i]) {
                vi path;
                int j = i;
                while (1) {
                    if (!v[j]) {
                        v[j] = 1;
                        path.PB(j);
                        j = p[j];
                    } else {
                        break;
                    }
                }
                reverse(path.begin(), path.end());
                cout << path.size() << endl;
                for (auto node : path) {
                    cout << node << " ";
                }
                cout << endl;
            }
        }
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
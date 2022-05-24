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
ll Power(int n) {
    if (n == 1) {
        return 2;
    }
    return 2*Power(n-1);
}
void solve(int arg) {
    string s, t;
    cin>>s>>t;

    if (t.length() == 1) {
        if (t[0] == 'a') {
            cout<<1<<endl;
            return;
        }
    }

    for (int i=0; i<t.length(); i++) {
        if (t[i] == 'a') {
            cout<<-1<<endl;
            return;
        }
    }

    cout<<Power(s.length())<<endl;
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
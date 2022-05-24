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

bool dec(int x, int y) {
    return x>y;
}
bool inc(int x, int y) {
    return x<y;
}

void solve(int arg) {
    string s;
    cin>>s;
    for (int i=0; i<s.length(); i++) {

        if (i<s.length()-1 && s[i] == '1' && s[i+1] == '1') {
            continue;
        }

        if (s[i] == '1' || s[i] == '?') {
            int j = i+1;
            while (j < s.length() && s[j] != '1') {
                
                if (s[j] == '0') {
                    cout<<j-i+1<<endl;
                    return;
                }

                j++;
            }
            if (j == s.length()) {
                cout<<j-i<<endl;
                return;
            }
            i = j-1;
        } else {
            cout<<1<<endl;
            return;
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
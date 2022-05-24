#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define PB push_back;
#define REP(i, a, b) for(int i=a; i<=b; i++)
void solve() {
    string s;
    cin>>s;
    char c;
    cin>>c;

    vector<int> possible;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == c) {
            possible.push_back(i);
        }
    }

    bool present = 0;

    for (int x: possible) {
        if (x%2 == 0 && (s.length()-x-1)%2 == 0) {
            present = 1;
            break;
        }
    }
    if (present) {
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
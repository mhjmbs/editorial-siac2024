#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
ll ans = 1e18;
vector<int> p;

void distribute(int i, ll group1, ll group2) {
    if(i == n) {
        ans = min(ans, abs(group1 - group2));
        return;
    }

    distribute(i+1, group1+p[i], group2);
    distribute(i+1, group1, group2+p[i]);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;
    p.resize(n);

    for(int& pi : p) cin >> pi;

    distribute(0, 0, 0);

    cout << ans << '\n';
}
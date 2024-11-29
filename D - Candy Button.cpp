#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n, c;
    cin >> n >> c;
    
    vector<int> t(n);
    for(int& ti : t) cin >> ti;

    //começo com o tempo do último doce -c
    //garantindo que como o primeiro doce
    int last = -c;
    int ans = 0;

    for(int ti : t) {
        if(ti - last >= c) {
            ans++;
            last = ti;
        }
    }

    cout << ans << '\n';
}
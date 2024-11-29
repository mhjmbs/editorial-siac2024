#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int& ai : a) cin >> ai;

    //Note que uso long long porque os números aqui podem ser bem
    //maiores que 10^9, não cabendo em um int normal(4MB)!
    vector<ll> pref(n+1);
    for(int i = 1; i < n+1; i++) {
        pref[i] = pref[i-1] + a[i-1]; //Cuidado com os índices!
    }

    //frequencia dos prefixos que já apareceram: {prefixo, quantas vezes apareceu}
    map<ll,int> freq;
    freq[0]++;

    ll ans = 0;

    for(int j = 0; j < n; j++) {
        ans += freq[pref[j+1] - x];
        freq[pref[j+1]]++;
    }

    cout << ans << '\n';
}
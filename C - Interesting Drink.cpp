#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> x(n);
    for(int& xi : x) cin >> xi;
    sort(x.begin(), x.end());

    int q;
    cin >> q;

    while(q--) {
        int m;
        cin >> m;

        int l = 0, r = n-1, ans = -1;

        while(l <= r) {
            int mid = (l+r)/2;

            //Se o atual for menor ou igual a m, ele possivelmente é o último
            //que eu consigo comprar, mas devo olhar para os mais a direita ainda
            if(x[mid] <= m) {
                ans = mid;
                l = mid+1;
            }else { //Caso contrário, o último que eu posso comprar está à minha esquerda.
                r = mid-1;
            }
        }

        cout << ans+1 << '\n';
    }
}
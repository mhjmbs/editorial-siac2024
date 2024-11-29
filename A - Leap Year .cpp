#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int y;
    cin >> y;

    if(y % 4 != 0) {
        cout << 365 << '\n';
    }else if(y % 4 == 0 && y % 100 != 0) {
        cout << 366 << '\n';
    }else if(y % 100 == 0 && y % 400 != 0) {
        cout << 365 << '\n';
    }else {
        cout << 366 << '\n';
    }
}
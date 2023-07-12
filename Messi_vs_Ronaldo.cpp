#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a*2 + b > x*2 + y) cout << "Messi" << endl;
    else if (a*2 + b < x*2 + y) cout << "Ronaldo" << endl;
    else cout << "Equal" << endl;

    return 0;

}
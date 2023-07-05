#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int num;
        cin >> num;

        char a[num];
        char b[num];
        char c[num];

        cin >> a;
        cin >> b;
        cin >> c;

        int value;

        if (b[0] >= a[0]) value = b[0] - a[0];
        else value = b[0] + 26 - a[0];

        vector <char> v;

        for (int i=0; i<num; i++) {
            char main[num] = {0};
            if (c[i]+value > 'z') {
                main[i] = c[i]+value-26;
            } else {
                main[i] = c[i]+value;
            }
            v.push_back(main[i]);
        }

        for (int j=0; j<num; j++) {
            cout << v[j];
        }

        cout << endl;

    }

    return 0;

}
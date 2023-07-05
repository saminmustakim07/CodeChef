#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        int value_1[] = {a1, a2, a3};
        int value_2[] = {b1, b2, b3};

        sort (value_1, value_1+3);
        sort (value_2, value_2+3);

        int value_1_main = value_1[1]+value_1[2];
        int value_2_main = value_2[1]+value_2[2];

        if ( value_1_main > value_2_main) {
            cout << "Alice" << endl;
        } else if ( value_1_main < value_2_main) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }

    }

    return 0;

}
#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int x, y, z;
        cin >> x >> y >> z;
    
        int a, b;

        if (((x*y) % z) == 0) { 
            a = x*y; b = z; 
            cout << a << ' ' << b << endl;
        }
        else if (((x*z) % y) == 0) { 
            a = x*z; b = y; 
            cout << a << ' ' << b << endl;
        }
        else if (((y*z) % x) == 0) { 
            a = y*z; b = x; 
            cout << a << ' ' << b << endl;
        }
        else { 
            cout << -1 << endl; 
        }
    
    }

    return 0;

}
#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int mode (int a[], int n){
    int b[n];
    int max = *max_element(a, a + n);
    int t = max + 1;
    int count[t];
    for (int i = 0; i < t; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[a[i]]++;
    int mode = 0;
    int k = count[0];
    for (int i = 1; i < t; i++) {
        if (count[i] > k) {
            k = count[i];
            mode = i;
        }
    }
 
    return mode;
}

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int num;
        cin >> num;

        int arr[num*2];

        for (int i=0; i<num; i++)
            cin >> arr[i];

        for (int i=num; i<num*2; i++)
            cin >> arr[i];

        sort (arr, arr+num*2);

        int size = sizeof(arr)/sizeof(arr[0]);
        
        int x = mode(arr, size);

        int count = 0;

        for (int j=0; j<num*2; j++) {
            if (arr[j] == x) count++;
        }

        cout << count << endl;

    }

    return 0;

}
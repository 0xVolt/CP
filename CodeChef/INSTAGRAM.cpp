// Problem Code: INSTAGRAM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int x, y;

        cin >> x >> y;

        if (x > (10 * y)) {
            cout << "YES";
        } else
            cout << "NO";

        cout << "\n";
    }

    return 0;
}

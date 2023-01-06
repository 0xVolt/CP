// Problem Code: CABS 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int X, Y;

        cin >> X >> Y;
        
        if (X < Y) {
            cout << "FIRST";
        } else if (X > Y)  
            cout << "SECOND";
        else
            cout << "ANY";
            
        cout << "\n";
    }

    return 0;
}
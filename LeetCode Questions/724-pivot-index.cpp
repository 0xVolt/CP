#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr) {
    int index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        int sum_left = 0, sum_right = 0;

        for (int j = 0; j <= i; ++j) {
            sum_left += arr.at(j);
        }

        for (int j = i; j < arr.size(); ++j) {
            sum_right += arr.at(j);
        }

        if (sum_left == sum_right) {
            index = i;

            break;
        }
    }

    return index;
}

int solve_better(vector<int> &arr) {
    
}

int main() {
    int t = 1;

    vector<int> in = {1, 7, 3, 6, 5, 6};

    while (t--) {
        int i = solve_better(in);
        
        cout << "\nPivot Index: " << i;
    }

    return 0;
}
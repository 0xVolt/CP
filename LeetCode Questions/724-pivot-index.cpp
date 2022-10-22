#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr) {
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

int solve_better(vector<int> arr) {
    int index = -1;

    int sum_right = 0, sum_left = arr[0];
    vector<int>::iterator initial_iter = arr.begin() + 1;

    for (initial_iter; initial_iter != arr.end(); ++initial_iter) {
        sum_right += *initial_iter;
    }

    cout << "\nInitially: " << sum_left << " | " << sum_right;

    vector<int>::iterator it = arr.begin() + 1;

    // while (sum_left != sum_right && it <= arr.end()) {
    //     it++;



    //     sum_left += *it;
    //     sum_right -= *it;

    //     cout << "\n" << sum_left << " | " << sum_right << " | " << *it;

    //     if (sum_left == sum_right)
    //         index = distance(it, arr.begin());
    // }

    return index;
}

int main() {
    int t = 1;

    vector<int> in = {1,7,3,6,5,6};

    while (t--) {
        int i = solve_better(in);
        
        cout << "\nPivot Index: " << i;
    }

    return 0;
}
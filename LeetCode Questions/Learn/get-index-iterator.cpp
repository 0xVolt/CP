// https://stackoverflow.com/questions/2152986/how-do-i-get-the-index-of-an-iterator-of-an-stdvector
// https://www.techiedelight.com/get-iterator-specific-position-vector-cpp/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declaring our vector and iterator
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator it = arr.begin();

    // Indices to advance the iter by
    int by_indices = 4;

    advance(it, by_indices);

    // Displaying the index the iter is at
    // cout << "Current index: " << distance(arr.begin(), it);

    // Alternatively,
    cout << "Current index: " << it - arr.begin();
    

    return 0;
}
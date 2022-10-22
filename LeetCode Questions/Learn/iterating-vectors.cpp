// https://www.educative.io/answers/how-to-iterate-through-a-vector-in-cpp

#include <bits/stdc++.h>
using namespace std;

// Iterating through a vector with a variable to hold it's size
void declare_var(vector<int> arr) {
    int arr_size = arr.size();

    for (int i = 0; i < arr_size; ++i) {
        // cout << arr[i] << " "; OR in more STL fashion,
        cout << arr.at(i) << " ";
    }

    cout << endl;
}

// Iterating through a vector using an iterator
void define_iterator(vector<int> arr) {
    // Initialise the starting location of the iterator
    vector<int>::iterator i = arr.begin();

    // Loop till iterator reaches the end of the array
    for (i; i < arr.end(); ++i) {
        cout << *i << " ";
    }

    cout << endl;
}

// Iterating through a vector using an iterator and the auto keyword
void define_iterator_pro(vector<int> arr) {
    for (auto i : arr) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    // declare_var(arr);
    // define_iterator(arr);
    define_iterator_pro(arr);

    return 0;
}
// Implements a solution of O(logn)

#include <bits/stdc++.h>
using namespace std;

// Function prototype
pair<int, int> first_and_last(vector<int>, int);
int find_start(vector<int>, int);
int find_end(vector<int>, int);

int main() {
    vector<int> arr = {2, 4, 5, 5, 5, 5, 5, 7, 9, 9};
    int target = 5;

    pair<int, int> output = first_and_last(arr, target);

    cout << "Array:\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    printf("\nTarget: %d\n\nAns: [%d, %d]", target, output.first, output.second);

    return 0;
}

// Function to implement linear search to solve the first_and_last problem
pair<int, int> first_and_last(vector<int> arr, int target) {
    pair<int, int> ret;
    int len = arr.size();
    int start = 0;

    // Go through the array
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            // Start index
            start = i;

            // Iteratively check if the next element in the array is the same as target 
            while((i + 1) < len && arr[i + 1] == target) {
                i++;
            }

            // Return pair
            ret.first = start;
            ret.second = i;
            
            return ret;
        }
    }

    // Returning [-1, -1] if the element doesn't exist
    ret.first = -1;
    ret.second = -1;

    return ret;
}
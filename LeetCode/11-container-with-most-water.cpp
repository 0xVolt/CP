#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(vector<int> height) {
            int i = 0, n = size(height) - 1, j = n, max = 0;

            while (j > i) {
                int min = height[j] < height[i] ? j : i;

                int area = (j - i) * height[min];

                if (max < area) {
                    max = area;
                }

                if (height[i] < height[j]) {
                    i++;
                } else {
                    j--;
                }
            }

            return max;
        }
};

int main() {
    Solution S;

    vector<int> array = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int answer = S.solve(array);
    cout << answer;

    return 0;
}
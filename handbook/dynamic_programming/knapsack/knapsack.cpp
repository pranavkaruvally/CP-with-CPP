#include <bits/stdc++.h>
using namespace std;

const int weights[] = {1, 3, 3, 5};
const int wsize = 4;

bool possible(int n, int k) {
    if (n < 0)
        return false;
    if (n == 0)
        return true;
    if (k == 0 && n > 0)
        return false;
    if (n == 1 && k >= 1)
        return true;

    return (possible(n-weights[k-1], k-1) || possible(n, k-1));
}

int main() {
    int sum = 0;
    sum = accumulate(weights, weights+4, sum);
    for (int i=0; i <= sum; i++) {
        if (possible(i, 4)) {
            cout << i << endl;
        }
    }

    return 0;
}

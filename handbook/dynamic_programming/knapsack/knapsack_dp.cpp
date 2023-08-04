#include <bits/stdc++.h>
using namespace std;


int main() {
    const int weights[] = {1, 3, 3, 5};
    const int wsize = 4;
    bool possible[100][100] = { false };
    int sum = 0;

    for (int k=0; k<=wsize; k++)
        possible[0][k] = true;
    possible[1][1] = true;

    sum = accumulate(weights, weights + wsize, sum);

    for (int i=1; i<=sum; i++) {
        for (int k=1; k<=wsize; k++) {
            int j = i - weights[k-1];
            possible[i][k] = (j == 0) ? true : possible[j][k-1] || possible[i][k-1];
        }
    }

    for (int i=0; i<sum; i++)
        if (possible[i][4])
            cout << i << endl;

    return 0;
}

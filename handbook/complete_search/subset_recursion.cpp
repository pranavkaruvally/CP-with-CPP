#include <bits/stdc++.h>
using namespace std;

void search(int, vector<int>, vector<int>, vector<vector<int>>&);

int main() {
    vector<int> mySet = {1, 2, 3};
    vector<vector<int>> powerset;
    search(0, mySet, {}, powerset);

    for (auto i: powerset) {
        cout<<"{";
        for (auto j: i) {
            cout<<j<<", ";
        }
        cout<<'}'<<endl;
    }

    return 0;
}

void search(int k, vector<int> mySet, vector<int> subset, vector<vector<int>> &powerset) {

    if (mySet.size() == k)
        powerset.push_back(subset);
    else {
        subset.push_back(mySet[k]);
        search(k+1, mySet, subset, powerset);
        subset.pop_back();
        search(k+1, mySet, subset, powerset);
    }
}

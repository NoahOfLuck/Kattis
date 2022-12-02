#include <bits/stdc++.h>
using namespace std;

void printvector(vector<vector<int>> &A, vector<string> &B, int index) {
    cout << B[index];
    for(int i:A[index]) {
        printvector(A,B,);
    }
}

int main() {
    cin.tie(NULL);ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i=0;i<n;i++) {
        cin >> strings[i];
    }

    int idx1, idx2, lastIdx = 0; //concat idx2 to idx1
    vector<vector<int>> v;
    v.assign(n, vector<int>());
    for(int i=0;i<n-1;i++) {
        cin >> idx1 >> idx2;
        idx1--;idx2--;
        v[idx1].push_back(idx2);
        lastIdx = idx1;
    }

    printvector(v, strings, lastIdx);
    cout << endl;
}
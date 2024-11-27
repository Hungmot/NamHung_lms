#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> getPreviousPermutation(int N, vector<int> X) {
    prev_permutation(X.begin(), X.end());
    return X; 
}

void solve() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N;
        vector<int> X(N);
        for (int i = 0; i < N; ++i) {
            cin >> X[i]; 
        }

        
        prev_permutation(X.begin(), X.end());

      
        for (int i = 0; i < N; ++i) {
            cout << X[i] << " ";
        }
        cout << endl;
    }
}

int main() {
	
    solve();
    return 0;
}

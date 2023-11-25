#include <iostream>
using namespace std;

int C_rec(int n, int k) {
    if (k > n) {
        return 0;
    }
    else if (k == 0 || k == n) {
        return 1;
    }
    else {
        return C_rec(n - 1, k - 1) + C_rec(n - 1, k);
    }
}

int depth(int n, int k) {
    if (k > n) {
        return 0;
    }
    else if (k == 0 || k == n) {
        return 1;
    }
    else {
        return 1 + depth(n - 1, k - 1) + depth(n - 1, k);
    }
}

int main() {
    int n, k;
    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;

    int C = C_rec(n, k);
    cout << "C(" << n << ", " << k << ") = " << C << endl;
    cout << "recursia = " << depth(n, k) << endl;

    return 0;
}

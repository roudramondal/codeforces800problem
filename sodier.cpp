#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    long long totalCost = 0;
    for (int i = 1; i <= w; ++i) {
        totalCost += i * k;
    }
    long long borrow = totalCost - n;
    cout << (borrow > 0 ? borrow : 0) << endl;

    return 0;
}
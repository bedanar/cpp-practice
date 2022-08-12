#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for(int i; i <= n; i++) {
        if (gcd(i, n) == 1) {
            k++;
            cout << k;
        }
    }
    // cout << k;
    return 0;
}

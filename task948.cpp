#include <iostream>
using namespace std;

int main() {
  int k, n;
    cin >> k  >> n;
    int a;
    if (n % k != 0) {
        a = n/k+1;
    }
    else {
        a = n/k;
    }
    if (n > k) {
        cout << a << " " << n - (a-1)*k;
    }
    else {
        cout << a << " " << n;
    }
}

#include <iostream>

using namespace std;
int gcd(int a, int b);

int main() {
    int i, k;
    cin >> i >> k;
    cout << gcd(i, k) << endl;

    return 0;
}


int gcd(int a, int b) {
    if (a == b) return a;
    else if (a < b) return gcd(a, b - a);
    else if (b < a) return gcd(b, a - b);
}

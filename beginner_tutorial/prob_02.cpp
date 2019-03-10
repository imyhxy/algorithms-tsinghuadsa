#include <iostream>

using namespace std;

int main() {
    long i, k;
    char op;
    cin >> i >> op >> k;
    switch (op) {
        case '+':
            i += k;
            break;
        case '-':
            i -= k;
            break;
        case '*':
            i *= k;
            break;
    }

    cout << i << endl;
    return 0;
}

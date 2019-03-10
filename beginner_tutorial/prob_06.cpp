#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    setvbuf(stdin, new char[1 << 20], _IOFBF, 1 << 20);
    setvbuf(stdout, new char[1 << 20], _IOFBF, 1 << 20);
    int n;
    int a, b;

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d\n", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}

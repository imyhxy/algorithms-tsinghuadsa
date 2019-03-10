#include <iostream>
#include <cstring>

#define STR_LEN 4096

using namespace std;

int main() {
    char str[STR_LEN + 1];
    cin.getline(str, STR_LEN + 1);

    int ret[58];

    for (int i = 0; i < 58; i++) {
        ret[i] = 0;
    }

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        ret[str[i] - 65] += 1;
    }

    for (int i = 32; i < 58; i++) {
        ret[i] += ret[i - 32];
        if (ret[i] > 0) {
            cout << char(i + 33) << ": " << ret[i] << endl;
        }
    }
    return 0;

}


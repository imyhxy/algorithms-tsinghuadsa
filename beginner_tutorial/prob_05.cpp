#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int s_h, s_m, s_s, e_h, e_m, e_s;

    scanf("%d:%d:%d %d:%d:%d", &s_h, &s_m, &s_s, &e_h, &e_m, &e_s);

    int lat =  3600 * (e_h - s_h) + 60 * (e_m - s_m) + (e_s - s_s);
    if (lat < 0) lat += 24 * 3600;
    
    lat = lat <= 43200 ? lat : 43200;
    cout << lat << endl;

    return 0;

}


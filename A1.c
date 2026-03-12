#include <stdio.h>

int main() {
    int t;
    long long a, b, c, d;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int step = 0;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        if (a * d == b * c) {
            step = 0;
        }
        else if ((a == 0 && c != 0) || (a != 0 && c == 0)) {
            step = 1;
        }
        else if ((a != 0 && c % a == 0 && b * (c / a) == d) || 
                 (b != 0 && d % b == 0 && a * (d / b) == c)) {
            step = 1;
        }
        else if ((a * d != 0 && (b * c) % (a * d) == 0) || 
                 (b * c != 0 && (a * d) % (b * c) == 0)) {
            step = 1;
        }
        else {
            step = 2;
        }

        printf("%d\n", step);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAXN 200000

long long f[MAXN + 2];
long long A[MAXN + 2];
long long B[MAXN + 2];

long long func(int x) {
    return (long long)x * (x & -x);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);

        memset(A, 0, sizeof(A));
        memset(B, 0, sizeof(B));

        // precompute f
        for (int i = 1; i <= n; i++) {
            f[i] = func(i);
        }

        while (q--) {
            int l, r;
            scanf("%d %d", &l, &r);

            A[l] += 1;
            A[r + 1] -= 1;

            B[l] += f[l - 1];
            B[r + 1] -= f[l - 1];
        }

        long long cnt = 0, sub = 0;

        for (int i = 1; i <= n; i++) {
            cnt += A[i];
            sub += B[i];
            long long ans = cnt * f[i] - sub;
            printf("%lld ", ans);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int a[1000];
        int freq[1000];
        int i, j;

        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            freq[i] = 1;
        }

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(a[i] == a[j] && i != j) {
                    freq[i]++;
                }
            }
        }

        int max = freq[0];
        int ans = a[0];

        for(i = 1; i < n; i++) {
            if(freq[i] > max) {
                max = freq[i];
                ans = a[i];
            } else if(freq[i] == max && a[i] < ans) {
                ans = a[i];
            }
        }
        for(int k=0;k<n;k++){
            printf("%lld ",a[k]);
        }
        printf("\n");
    }

    return 0;
}
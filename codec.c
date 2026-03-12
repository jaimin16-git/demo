#include <stdio.h>
int main() {
    int n,m,l,s;
    scanf("%d", &n);
    m=n%1000;
    for(int i=0; i<6; i++) {
        int u = m % 10;
        int t = (m / 10) % 10;
        int h = (m / 100) % 10; 

        if(u > t && u > h) {
            l = u * 100 + (t > h ? t * 10 + h : h * 10 + t);
            s = (t < h ? t * 100 + h * 10 + u : h * 100 + t * 10 + u);
        } else if(t > u && t > h) {
            l = t * 100 + (u > h ? u * 10 + h : h * 10 + u);
            s = (u < h ? u * 100 + h * 10 + t : h * 100 + u * 10 + t);
        } else {
            l = h * 100 + (u > t ? u * 10 + t : t * 10 + u);
            s = (u < t ? u * 100 + t * 10 + h : t * 100 + u * 10 + h);
        }

        int diff = l - s;
        printf("Diff: %d\n", diff);
        m = diff;
    }
    return 0;
}
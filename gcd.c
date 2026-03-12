#include <stdio.h>
int gcd(int x,int y){
    if(x<y){
        return x;
    }
    return gcd(x%y,y);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        long long a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        min=a[0];
        for(int k=1;k<n;k++){
            if(a[k]<min){
                min=a[k];
            }
        }
        int z=2;
        int p=0;
        while(1){
            int q=gcd(min,z+p);
            if(gcd(min,z+p)==1){
                break;
            }
        }
    }
}
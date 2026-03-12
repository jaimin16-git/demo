#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,ar[1000];
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&ar[j]);
        }
        int s1=ar[0];
        int s2=ar[0];
        for(int k=1;k<n;k++){
            if(s1+ar[k]>ar[k]) {
                s1+=ar[k];
            }else {
                s1=ar[k];
            }
            if(s1>s2) s2=s1;
        }
        printf("%d\n",s2);
    }
}
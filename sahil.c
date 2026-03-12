#include <stdio.h>
int main(){
    int ar[50][50];
    for (int i=0;i<5;i++){
        int sum=0;
        for (int j=0;j<4;j++){
            scanf("%d",&ar[i][j]);
            sum+=ar[i][j];
        }
        printf("%d\n",sum);
    }
}

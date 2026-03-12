#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int p=0;p<t;p++){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=-3* a[i][j];
            int x=i;int y=j;
            while(x>=0 && x<n && y<m && y>=0){
                sum+=a[x][y];
                x++,y++;
            }
            x=i;y=j;
            while(x>=0 && x<n && y<m && y>=0){
                sum+=a[x][y];
                x--;y--;
            }
           x=i;y=j;
            while(x>=0 && x<n && y<m && y>=0){
                sum+=a[x][y];
                x++;y--;
            }
            x=i;y=j;
            while(x>=0 && x<n && y<m && y>=0){
                sum+=a[x][y];
                x--;y++;
            }
            if(sum>max) max=sum;
        }
    }
    printf("%d\n",max);
}
}
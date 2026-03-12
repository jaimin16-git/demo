#include <stdio.h>
int main(){
    int t;
    long long a,b,c,d;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int step=0;
        scanf("%11d %11d %11d %11d",&a,&b,&c,&d);
        if((a*d)==(c*b)){
            step=0;
        }
        else if((a==0 && c!=0) || (a!=0 && c==0)){
            step=1;
        }
        else if(((a*d)*((b*c)/(a*d))==0 && b*c!=0) || ((b*c)*((a*d)/(b*c))==0 && a*d!=0)){
            step=1;
        }
        else if((a*d)%(b*c)==0 || (b*c)%(a*d)==0){
            step=1;
        }
        else {
            step=2;
        }
        printf("%d\n",step);
    }
    return 0;
}
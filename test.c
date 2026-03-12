#include <stdio.h>
int main(){
    int n,m,l,s;
    scanf("Enter the number:%d",&n);
    m=n%100;
   

    for(int i=1;i<=6;i+=1){
         int t=(m/10)%10;
         int u=m%10;

        if(t<u){
         l=u*10+t;
         s=t*10+u;
        }
        else {
         l=t*10+u;
         s=u*10+t;
        }

        int Diff=l-s;
        printf("Diff:%d\n",Diff);
        m=Diff; 
    }
    return 0;

}
#include<stdio.h>
int main(){
    long long c;
    scanf("%lld",&c);
    for(long long k=0;k<c;k++){
        long long n;
        scanf("%lld",&n);
        long long a[n];
        for(long long i=0;i<n;i++)scanf("%lld",&a[i]);
        long long odd=0,even=0,even_sum=0,odd_sum=0;
        for(long long j=0;j<n;j++){
            if(j%2==0){
                even++;
                even_sum+=a[j];
            }else{
                odd++;
                odd_sum+=a[j];
            }
        }
        if(odd!=0 && even!=0 && odd_sum%odd==0 && even_sum%even==0 && odd_sum/odd==even_sum/even)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
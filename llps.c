#include <stdio.h>
#include <string.h>
int main(){
    char s[10];
    scanf("%s",s);
    char x='a';
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(x=='a' || s[i]>=x) x=s[i];
    }
    for(int i=0;i<strlen(s);i++){
        if(s[i]==x) count+=1;
    }
    for(int j=1;j<=count;j++){
        printf("%c",x);
    }
    printf("\n");
    return 0;
}
for(int i=0;i<k;i++){
    if(c[i]>c[k+1]){
        int x=c[k+1];
        for (int j=i+1;j<=k+1;j++){
            c[j]=c[j-1];
        }
        c[i]=x;
        break;
    }
}
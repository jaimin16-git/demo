#include <bits/stdc++.h>
using namespace std;
int main(){
    // for(i=1;i<n;i++){
    //     int key=a[i];
    //     int j=i-1;
    //     while(j>=0 && a[j]>key){
    //         a[j+1]=a[j];
    //         key;
    //     }
    //     a[j+1]=key;
    // }

    void merge(int a[],int l,int q,int r){
        int nl=q-l+1;
        int nr=r-q;
        int i,j,k=0;
        vector<int>l(nl),r(nr);
        for(i=0;i<nl;i++){
            l[i]=a[i];
        }
        for(j=0;j<nr;j++){
            r[i]=a[i++];
        }
        i=0;j=0;k=0;
        while(i<nl && j<nr){
            if(l[i]<r[j]) a[k++]=l[i++];
            else a[k++]=r[j++];
        }
        while(i<nl){
            a[k++]=l[i++];
        }
        while(j<nr){
            a[k++]=r[j++];
        }

    }
    void merge-sort(int a[],int l,int r){
        if(l>=r) return;
        int q=l+r/2;
        merge-sort(a,l,q);
        merge-sort(a,q+1,r);
        merge(a,l,q,r);
    }
}
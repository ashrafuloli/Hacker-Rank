#include <stdio.h>


int main() {
    int MAX =1000000;
    int a[1000000] = {0}, n, m, t;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
       scanf("%d",&t);
        a[t]--;
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++){
         scanf("%d",&t);
        a[t]++;
    }

    for(int i=0;i<MAX;i++){
        if(a[i] > 0){
           printf("%d " "",i);
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n,i,x=1;
    scanf("%d",&n);
    int a[n];
    for(int i = 1; i <= n; i++)
         scanf("%d",&a[i]);
    for(int x = 1; x <= n; x++){
        for(int i = 1; i<= n; i++){
            if(a[a[i]] == x){
                printf("%d\n",i);
                break;

            }
            
           
        }
    }

    
       
    
    return 0;
}
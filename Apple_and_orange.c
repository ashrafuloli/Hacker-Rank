#include<stdio.h>

int main(){
int d1,d2,n,m,a,b,s,t,apple=0,orange=0;
scanf("%d%d",&s,&t);
scanf("%d%d",&a,&b);
scanf("%d%d",&m,&n);

    for(int i=0;i<m;i++)
    {
    scanf("%d",&d1);
    if((a+d1)>=s && (a+d1)<=t)
    apple++;

    }

    for(int i=0;i<n;i++)
    {
    scanf("%d",&d2);
    if((b+d2)>=s && (b+d2)<=t)
    orange++;
    } 

    printf("%d\n%d",apple,orange);
    return 0;

}


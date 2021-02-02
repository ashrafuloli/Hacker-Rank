#include<stdio.h>
#include<math.h>
int main(){

    long long int p,q,i,j,sum,x,z,s,a;
    long long n=0,c=0,y=0,b=0,d=0,multi=1,m=1;
    scanf("%lld",&p);
    scanf("%lld",&q);
    for(i=p;i<=q;i++){
        s=i*i;
        a=s;
        while(a!=0)
        {
            n++;
            a=a/10;
        }
        a=s;
        x=n/2;
        for(j=0,multi=1;j<n-x;j++,multi=multi*10)
        {
            c=a%10;
            b=multi*c+b;
            a=a/10;
        }
        sum=a+b;
        n=0;
        b=0;
        if(i==sum)
        {
            printf("%lld ",i);
            m=0;
        }
    }
    if(m==1)
    printf("INVALID RANGE");
    return 0;

}
#include<stdio.h>
int main()
{
  int t,n,i,j,a[1000],count=0,k;
   scanf("%d",&t);
    for(j=0;j<t;j++)
    {
    scanf("%d%d",&n,&k);
      for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {  
            if(a[i]<=0)
            {
             count++;
            }
        }
        if(count<k)
        {
         printf("YES\n");
          count=0;
        }

        else

        {
            printf("NO\n");
            count=0;
        }

    }

    return 0;
}

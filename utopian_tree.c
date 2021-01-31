#include <stdio.h>

int main()
{  int t,i,j;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
      int n;
      scanf("%d",&n);
      int result=1;
       for(j=1;j<=n;j++)
       {
           if(j%2==0)
            result++;
        else 
          result*=2;
       }
      printf("%d\n",result); 
  }
	return 0;
}

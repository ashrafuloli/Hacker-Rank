#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
int main()
{
    int n;
  scanf("%d",&n);
  int c[n];
    for(int i=0;i<n;i++)
    {
   scanf("%d",&c[i]);
    }
  int t=-1;
for(int i=0;i<n;i++,t++)
   {
    if(i<n-2 && c[i+2]==0)
    i++;
   }
 printf("%d",t);
 return 0;

}
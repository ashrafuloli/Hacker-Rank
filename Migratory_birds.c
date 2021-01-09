#include<stdio.h>
int main(){
 int n,i,result,max;
 scanf("%d",&n);
 int arr[n],flag[6]={0};
 for ( i = 0; i <n; i++)
 {
    scanf("%d",&arr[i]);
    flag[arr[i]]++;

 }
 max=flag[1];

 for ( i = 2; i < 6; i++)
 {
     if (max<flag[i])
    {
      max = flag[i];
     result =i;
 }
 }
 
printf("%d",result);
return 0;
 
}
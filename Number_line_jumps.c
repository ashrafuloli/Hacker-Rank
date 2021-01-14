#include <stdio.h>
int main()
{
  long  int x1,v1,x2,v2,temp=0; 
    scanf("%ld %ld %ld %ld",&x1,&v1,&x2,&v2);
    
    while(x1<100000000)
    {
        x1+=v1;
        x2+=v2;
   
      if(x1==x2)
      {
        temp= 1;
        break;
      }

    }

      if (temp==1)
      {
          printf("YES\n");

      }   
    else
      {

   
        printf("NO\n");

       }
      

        
    return 0;
}
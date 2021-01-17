#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

int main()
{
    int input;
   scanf("%d\n",&input);
     for(int i=1;i<=input;i++)
    {
       int num;
     scanf("%d\n",&num);
        int x=num;
          int digit,count=0;
         while(x>0)
        {
          digit=x%10;
          if(digit!=0 && num%digit==0)
            count++;
               x=x/10;
        }
      printf("%d\n",count);
    }
 return 0;

}


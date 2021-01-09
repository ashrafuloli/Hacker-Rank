#include<stdio.h>
int main()
{

   long int n,m,x,i,j,k,p=0,q=0;
    scanf("%ld %ld",&n,&m);

   long  c[n], right [n],left [n];
   for ( i = 0; i < n; i++)
   {
       c [i]= -1;
       right [i] =0;
       left [i]=0;

   }

  

   for ( i = 0; i < n; i++)
   {
    
      scanf("%ld",&x);
      c[x]=x;
   }
   
   //For left and right side's nearest value

for ( i = 0; i < n; i++)
{
  p = 0 ;
   q = 0;
  for ( j = i, k = i; j<n || k >= 0; j++,k--)
  {
      // For right side
     if(j<n)
     {
         if (c[j]== -1)

        
             p++;
         else
         {
            right[i]=p;
            break;
         }
        
     }

     //For left side
     if (k>=0)
     {
         if (c[k]== -1)
        
             q++;
      else
         {
             left[i]=q;
             break;
         }
         
         
     }
     
 }
}


//For maximum nearest value

int max1=right[0];
int max2=left[0];
for ( i = 0; i < n; i++)
{
    if (right[i]>max1)
   
       max1=right[i];
  

    if (left[i]>max2)
  
       max2=left[i];
    
}  
    


    if (max1>max2)
   {
    printf("%ld",max1);
   } 
   else
 {
   printf("%ld",max2);
 }


 
//  main function end
}   







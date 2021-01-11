#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int q,x,y,z,catA,catB;
    scanf("%d",&q);

    for (int i = 0; i < q; i++)
    {
         scanf("%d %d %d",&x,&y,&z);
         catA = abs(z-x);
         catB = abs(z-y);

         if (catA == catB){
          printf("Mouse C\n");
          }
        
        else if (catA < catB){
         printf("Cat A\n");
         }
        
        else
        {
        printf("Cat B\n");  
        }


    }
    
    
   
    return 0;    

}
 

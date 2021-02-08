#include<stdio.h>
#include<string.h>
int main() {
 
    char s;
    scanf("%c",&s);
     int arr[26]={0};
    int i=0,count=0;
    while(s[i]!='\0')
        {
        arr[s[i]-97]++;
        i++;
    }
    i=0;
    while(i<26)
        {
        if(arr[i]%2!=0)
            {
            if(count<1)
                count++;
            else
                {
                 printf("NO");
                return 0;
            }
             
        }
        i++;
    }
         printf("YES");
    return 0;
}

#include<stdio.h>
int main(){
    long long int start =1, end=3,value=3;
    long long int time, result;
    scanf("%lld",&time);
    while(1){

        if(start<=time&&time<=end){
            time=time-start;
            result = value-time;
            printf("%lld",result);
            break;
        }
        start=end+1;
        value=2*value;
        end=value+end;
    }
    return 0;
}
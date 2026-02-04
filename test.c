#include <stdio.h>

int main() 
{
    int num;
    
    printf("ENter a number \n");
    scanf("%d",&num);
    if(num>2){
    
    int count =0;
    for (int i =1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if (count==2){
        printf("num is prime");

    }
    else{
        printf("num is not prime");
    }
}
    else{
        printf("not a prime");
    }
    
}

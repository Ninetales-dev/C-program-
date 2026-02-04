#include <stdio.h>
void main(){
    int lo_num,up_num;
    printf("Enter lowest range : \n");
    scanf("%d",&lo_num);
    printf("Enter upper range : \n");
    scanf("%d",&up_num);
    int count=0;
    for(int i=lo_num+1;i<up_num;i++){
        count=0;
        for (int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if (count==2){
            printf("%d ",i);
        }
    }

}
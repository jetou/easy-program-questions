#include<stdio.h>
#include<string.h>
int main(){
    int input[10001]={0};
    int output[10001]={0};
    int i,j;
    for(i=0;i<1000;i++){
        scanf("%d",&input[i]);
        if(input[i] == 0){
            break;
        }
    }
    for(j=0;j<=i;j++){
        if(j==0 || j % 2==0){
            output[j] = input[j]*input[j+1];
        }else{
            output[j] = input[j]-1;
            if(input[j+2]==0){
                break;
            }

        }
    }
    if (j==0||i<2){
        printf("0 0");
    }else{
        for(i=0;i<j;i++){
            printf("%d ",output[i]);
        }
        printf("%d\n",output[j]);
    }
    return 0;
}

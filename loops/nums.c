#include <stdio.h>

int main(){

     int n;
     int num = 1;
         printf("Enter the number \n");
         scanf("%d",&n);
           
            for(int i = 1; num <= n;++i){
                for(int j = 1;j <= i && num <= n;++j){
                    printf("%d",num);
                    ++num; 
                }
                printf("\n");
           }
         


    }

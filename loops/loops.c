#include <stdio.h>

int main(){
     int num = 0;

         while(num <= 10){
            printf("%d \n",num);
            ++num;
         }
         
         num = 0;
         do{
            printf("%d \n",num);
            ++num;
         }while(num <= 10);

         for(int i = 0; i <= 10;++i){
            printf("%d \n",i);
         }

     return 0;

}

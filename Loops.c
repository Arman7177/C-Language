#include <stdio.h>

int main(){
     int num = 0;

         while(num <= 100){
            printf("%d \n",num);
            ++num;
         }
         
         num = 0;
         do{
            printf("%d \n",num);
            ++num;
         }while(num <= 100);

         for(int i = 0; i <= 100;++i){
            printf("%d \n",i);
         }

     return 0;

}

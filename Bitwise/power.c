#include <stdio.h>
 
     int main(){
          
               int num,count = 0;
             
                   printf("Enter the number \n");
                   scanf("%d", &num);             
                   
                   while(num){
                         if((num & 1) == 1){
                         ++count;
                    }
                      num >>= 1;
                    }
                    if(count == 1){
                       printf("True\n");
                    }else if(count > 1 || count == 0){
                       printf("False\n");
                    }
         return 0;       
     }

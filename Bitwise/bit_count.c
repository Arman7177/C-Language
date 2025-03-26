 #include <stdio.h>
   
 int main(){
          
           int num,count = 0;
               
           printf("Enter the number \n");
           scanf("%d", &num);

           if(num == 0){
              printf("Count of 1 is 0\n");
           }
                     
           while(num){
                 if((num & 1) == 1){
                 ++count;
           }
            num >>= 1;
           }
           int res = count & 1;

                if(res){
                   printf("Count of 1  is odd\n");
                }else{
                   printf("Count of 1  is even\n");
                }                     
      return 0;
                                       
 }

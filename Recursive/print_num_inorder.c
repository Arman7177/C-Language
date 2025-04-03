#include <stdio.h>

 void print_num_inorder(int num);

 int main(){

      int num;
          printf("Enter the number:\n");
          scanf("%d",&num);

          print_num_inorder(num);

      return 0;
 }
   
   void print_num_inorder(int num){
        if(num < 0){
           return;
        }
        print_num_inorder(num-1);
        printf("%d\n",num);
   }

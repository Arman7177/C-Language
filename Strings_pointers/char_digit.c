#include <stdio.h>

int digit(char* arr);

int main(){

    char arr[] = "He0ll0";

    int res = digit(arr);

    if(res < 0){
       printf("There is no digit in array\n");
    }else{
       printf("The index of digit = %d\n",res);
    }
  return 0;

 }

    int digit(char* arr){
        for(int i = 0; *(arr+i) != '\0';++i){
            if(*(arr+i) >= '0' && *(arr+i) <= '9'){
            return i;
            }
        }
           return -1;
    }
    

#include <stdio.h>

int my_strlen(char* str);

int main(){

    char* arr = "Hello";
    int res = my_strlen(arr);
    printf("%d\n",res);
   
    return 0;
 }
 
int my_strlen(char* str){
    int count = 0;
    while(*str != '\0'){
          ++count;
          ++str;
    }
    return count;
    }

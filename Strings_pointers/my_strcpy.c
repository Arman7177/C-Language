#include <stdio.h>

char* my_strcpy(char* str2,const char* str1);

int main(){
   
    char* str1 = "Hello World";
    char str2[20];

    char* res = my_strcpy(str2,str1);

    printf("%s\n",res);

    return 0;
 }
  char* my_strcpy(char* str2,const char* str1){
        char* tmp = str2;
        while(*str1 != '\0'){
        *str2 = *str1;
            ++str1;
            ++str2;
        }
        *str2 = '\0';
        return tmp;
  }

#include <stdio.h>

char* my_strcat(char* str1, const char* str2);

int main(){
       
       char str1[30] = "Hello ";
       char* str2 = "World";

       char* result = my_strcat(str1,str2);

       printf("%s\n",result);

       return 0;
 }
 char* my_strcat(char* str1, const char* str2){
       char* tmp = str1;
       while(*str1 != '\0'){
             ++str1;
       }
       while(*str2 != '\0'){
            *str1 = *str2;
            ++str1;
            ++str2;
       }
       *str1 = '\0';
       return  tmp;
 }

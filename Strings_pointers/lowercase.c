#include <stdio.h>

char* lowercase(char*arr);

int main(){
    
    char arr[100];

    fgets(arr,sizeof(arr),stdin);

    char* result = lowercase(arr);

    printf("%s",result);

    return 0;

 }
 char* lowercase(char*arr){
      for(int i = 0; *(arr+i) != '\0'; ++i){
          if(*(arr+i) >= 'A' && *(arr+i) <= 'Z'){
             *(arr+i) ^= 32;
          }
      }
      return arr;
 }

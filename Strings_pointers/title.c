#include <stdio.h>

char* title(char*arr);

int main(){

    char arr[100];

    fgets(arr,sizeof(arr),stdin);

    char* result = title(arr);

    printf("%s",arr);
   
   return 0;
 }

 char* title(char*arr){
    
    int newline = 1;
      
      for(int i = 0; arr[i] != '\0';++i){
            if(arr[i] == ' ' || arr[i] == '\n' || arr[i] == '\t'){
               newline = 1;
         }else if(newline){
            if(arr[i] >= 'a' && arr[i] <= 'z'){
               arr[i] ^= 32;
            }
               newline = 0; 
         }else{
            if(arr[i] >= 'A' && arr[i] <= 'Z'){
               arr[i] ^= 32;
            }
         }
     }
     return arr;
 }

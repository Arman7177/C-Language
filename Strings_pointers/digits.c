#include <stdio.h>

int number(char*arr);

int main(){

    char arr[100];

    fgets(arr,sizeof(arr),stdin);

    if(!number(arr)){
       printf("There is no digit in array\n");
    }
    printf("\n");

   return 0;
 
 }

 int number(char*arr){
    int found = 0;
    for(int i = 0; arr[i] != '\0';++i){
        if(*(arr+i) >= '0' && *(arr+i) <= '9'){
           printf("%c",arr[i]);
           found = 1;
        }
    }
    return found;
 }
 

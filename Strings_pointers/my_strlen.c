#include <stdio.h>

int length(char*arr);

int main(){

    char arr[100];

    fgets(arr,sizeof(arr),stdin);

    int res = length(arr);

    printf("The length of string = %d\n",res);


 }

 int length(char* arr){
     int count = 0;
     while(*arr != '\0'){
         ++count;
         ++arr;
     }
     return count;
 }

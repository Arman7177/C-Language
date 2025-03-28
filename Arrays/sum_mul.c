#include <stdio.h>

int main(){
    
     int arr[10];
     int sum = 0;
     long long mul = 1;
          printf("Enter the numbers:\n");

          for(int i = 0; i < 10;++i){
              scanf("%d",&arr[i]);
              sum += arr[i];
              mul *= arr[i];
          }
          printf("The sum = %d\nThe mul = %lld\n",sum,mul);

      return 0;

}

#include <stdio.h>

int main() {
   
    int num;
    unsigned long long fact = 1;
    
    printf("Enter the number \n");
    scanf("%d",&num);
   
   if(num < 0)  {
       printf("fact doesnt exist \n");
    } 
    else{
        for(int i = 1; i <= num; i++)   {
        fact = fact * i;
    }
     printf("%d! =  %llu\n",num, fact);
    }

  return 0;
}

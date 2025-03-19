#include <stdio.h>

int main(){
    
     char lett;

     printf("Enter the letter \n");
     scanf("%c",&lett);
     
     if(lett >= 65 && lett <= 90){
        lett +=32;
     }

     switch(lett){

         case 'a':case 'e':case 'u':
         case 'i':case 'o': 
             
             printf("The letter is vowel \n");
             break;

         case 'n':case 'r':case 's':case 't':case 'w':case 'x':
         case 'p':case 'q':case 'b':case 'f':case 'j':
         case 'c':case 'g':case 'k':case 'v':case 'y':
         case 'd':case 'h':case 'l':case 'm':case 'z':
             printf("The letter is consonant \n");

         default:
              printf("NO LETTER \n");
      }


 }

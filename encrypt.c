#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[256];
    char output[256];
    char *middle;
    
    
        scanf("%s", input);
//   input = input + "\0"; 
  //  if (sizeof(input)>sizeof(output)) {
   middle= (char *) malloc(sizeof(input));
    
   int i;
   for( i=0; i<sizeof(middle); i=i+1){
  
       middle[i]=(char)((int)input[i] +1);
   
   }
    
    printf("%s", middle);
    }

    
  //  strcpy(output,input);
   // printf("%s",strcat(middle,  "\n"));

    //printf("%s",output);
    


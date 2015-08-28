#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[256];
    char output[206];
    char *middle;
    
    
        scanf("%s", input);
//   input = input + "\0"; 
    if (sizeof(input)>sizeof(output)) {
    middle= (char *) malloc(sizeof(input));
    for(int i; i<350; i=i+1){
    middle[i]=(char)((int)middle[i] +1);
    }
    
    printf("%s"," \n done\n");
    }

    
    strcpy(output,input);
    printf("%s",strcat(middle,  "\n"));

    printf("%s",output);
    }


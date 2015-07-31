#include <stdio.h>

int strings() {
    int dog = 2002020;
   // int *cat= 14;
    char this[100];
    int count;

    this[0] = 'l';
    this[1] = 'o';
    this[2] = 'o';
    this[3] = 'k';
    this[4] = 'i';
    this[5] = 'n';
    this[6]= 0;

    for(count=0; count<7 ; count= count+1)
    {

        printf("%c", this[count]);
    } 

    printf("\n");


  //:w
  //printf("\n dogs are life  %lu \n", *cat);


}

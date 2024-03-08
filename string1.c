#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
  int chA='A' ,chL;
  for(chL='a';chL<='z';chL++){
        putchar(chL);

        putchar(chA);
        chA++;
        printf("  ");
  }
    return 0;}


#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
 char str[100];
 int i, digits=0, alphabets=0, specialChar=0;
 printf("Enter a string: ");
 gets(str);
 for( i=0; str[i] != '\0'; i++){
   if( (str[i]>='a' && str[i]<= 'z') ||(str[i]>= 'A' && str[i]<='Z') ){
     alphabets ++;
   }
    else if( (str[i]>= '0' && str[i]<= '9')){
        digits ++;
    }
    else{
        specialChar++;
    }

 }

printf("alphabets:%d\ndigits:%d\nspecial characters:%d",alphabets,digits,specialChar);
     return 0;
}

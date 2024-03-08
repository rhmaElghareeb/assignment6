#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
 char str1[100],str2[100];
 int j=0;
 printf("Enter your string\n");
 fgets(str1,sizeof(str1),stdin);
 for(int i= strlen(str1)-1; i>=0;i--){
    str2[j]=str1[i];
    j++;
 }
  str2[j]='\0';

printf("The reversed string is:%s",str2);


return 0;
}

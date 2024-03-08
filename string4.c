#include <stdio.h>
#include <stdlib.h>

int main()
{ char str[100],ch;
  int index=0;
    printf("Enter your string:\n");
    fgets(str,sizeof(str),stdin);
    printf("input character to search:\n");
    scanf(" %c",&ch);
    for(int i=0; str[i]!= '\0';i++){
        if(str[i]== ch){
            break;
        }
        index ++;
    }
    printf("%c is found at index %d",ch,index);
    return 0;
}

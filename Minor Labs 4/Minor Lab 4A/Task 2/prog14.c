#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    printf("Enter a string: ");
    char buff[500];
    fgets(buff, 500, stdin);
    printf("You entered %s", buff);
    int i = 0;
    int length = strlen(buff);
    for(i; i < length -1; i++){
        printf("%c", toupper(buff[i]));
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char buff[500];
    char buff2[500];
    fgets(buff, 500, stdin);
    printf("You entered %s", buff);
    strcpy(buff2, buff);
    int i = 0;
    int length = strlen(buff);
    for(i; i < length-1; i++){
        if(islower(buff[i])){
            if(buff[i] == 'a'){
                buff[i] = 'z';
            }else{
                buff[i] = buff[i] - 1;
            }

        }

    }
    printf("rotated left: %s", buff);

    strcpy(buff, buff2);
    i = 0;
    for(i; i < length-1; i++){
        if(islower(buff[i])){
            if(buff[i] == 'z'){
                buff[i] = 'a';
            }else{
                buff[i] = buff[i] + 1;
            }

        }

    }
    printf("rotated right: %s", buff);



    return 0;
}
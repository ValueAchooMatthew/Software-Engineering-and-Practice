#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>



int main(){

    while(true){
        char menu_selection[50];
        printf("Hello and welcome to the password resiliance analyzer! :)\n");
        printf("Please input what you would like to do");
        printf("Test a new password\nView strength of last tested password\nExit\n");
        scanf("%s", menu_selection);
        if(tolower(menu_selection) == "exit"){
            break;
        }else if(tolower(menu_selection) == "test a new password"){
            printf("Based!\n");
        }else if(tolower(menu_selection) == "view strength of last tested passwprd"){
            printf("Cringe!\n");
        }else{
            printf("Nevante");
        }




    }


    return 0;
}
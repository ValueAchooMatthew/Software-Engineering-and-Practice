#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>


int hasLowercase(char x[]){
    int has_lower = 0;
    int i = 0;
    for(i; i < strlen(x); i++){
        if(islower(x[i])){
            has_lower = 1;
        }
    }

    return has_lower;
}
int hasUppercase(char x[]){
    int has_upper = 0;
    int i = 0;
    for(i; i < strlen(x); i++){
        if(isupper(x[i])){
            has_upper = 1;
        }
    }
    return has_upper;
}
int hasDigit(char x[]){
    int has_digit = 0;
    int i = 0;
    for(i; i < strlen(x); i++){
        if(isdigit(x[i])){
            has_digit = 1;
        }
    }
    return has_digit;
}

int hasSpecialChar(char x[]){
    int has_spec = 0;
    int i = 0;
    for(i; i < strlen(x); i++){
        if(!isalnum(x[i])){
            has_spec = 1;
        }
    }
    return has_spec;

}
int isLengthy(char x[]){
    int lengthy = 0;
    if(strlen(x) >= 12){
        lengthy = 1;
    }
    return lengthy;

}
int evaluateStrength(char x[]){

    return(hasLowercase(x) + hasUppercase(x) + hasDigit(x) + hasSpecialChar(x) + isLengthy(x));

}

int main(){
    char last_tested[50] = "None";
    while(true){
        char menu_selection[50];
        printf("\nHello and welcome to the password resiliance analyzer! :)\n");
        printf("Please input what you would like to do:\n");
        printf("- Test a new password (please type test)\n- View strength of last tested password (please type view)\n- Exit (please type exit)\n");
        scanf("%s", menu_selection);
        int i = 0;
        int length = strlen(menu_selection);
        for(i; i < length; i++){
            menu_selection[i] = tolower(menu_selection[i]);
        }
        printf("You chose: %s\n", menu_selection);
        if(strcmp(menu_selection, "exit") == 0){
            break;
        }else if(strcmp(menu_selection, "test") == 0){
            bool long_enough = false;
            while(!long_enough){
                char password[50];
                printf("Please input the password you would like to test: ");
                scanf("%s", password);
                if(strlen(password)>= 8){
                    long_enough = true;
                    int strength = evaluateStrength(password);
                    if(strength <= 2){
                        printf("Your password strength is weak.\n");
                        strcpy(last_tested, "weak");

                    }else if(strength == 5){
                        printf("Your password strength is strong.\n");
                        strcpy(last_tested, "strong");
                    }else{
                        printf("Your password strength is moderate.\n");
                        strcpy(last_tested, "moderate");
                    }

                }else{
                    system("cls");
                    printf("The password you entered does not have a sufficient number of characters, please try again!\n");
                }
            }

        }else if(strcmp(menu_selection, "view") == 0){
            if(strcmp(last_tested, "None") == 0){
                printf("There has been no previous password tested.\n");
            }else{
                printf("The previous password was: %s\n.", last_tested);
            }
        }else{
            system("cls");
            printf("It seems you did not select a valid input, please try again!\n");
        }

    }

    return 0;
}
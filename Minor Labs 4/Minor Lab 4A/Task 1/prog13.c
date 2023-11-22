#include <stdio.h>
#include <string.h>

int main(){

    char str[500] = "Hello, how are you";
    printf("%s\n", str);
    strcpy(str, "Goodbye");
    printf("%s\n", str);
    char* pointer = str;
    printf("%s\n", pointer);
    pointer = &str[0];
    printf("%s\n", pointer);
    pointer = &str[1];
    printf("%s\n", pointer);
    pointer = &str[0];
    strcpy(pointer, "This is a different string");
    printf("%s\n", pointer);
    printf("%s\n", str);

    return 0;
}

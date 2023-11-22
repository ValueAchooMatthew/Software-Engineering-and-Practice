#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nod(int n){
    int m = 1;
    int i = 0;
    if(n == 1){
        return 1;
    }else{
        while(m < n){
            m = m*10;
            i++;
        }
        return i;
    }
}

int nod1(int n){

    char buff[500];
    sprintf(buff, "%d", n);
    return strlen(buff);


}


int main(int argc, char *argv[]){

    if(argc != 3){
        printf("You have entered an incorrect number of command line arguments\n");
        printf("All command line arguments:\n");
        int i = 0;
        for(i; i < argc; i++){
            printf("%s\n", argv[i]);
        }

    }else{
        int n1 = atoi(argv[1]);
        if(n1 > 0){
            int n2 = atoi(argv[2]);
            if(n2 > 0){
                printf("The first command line argument was %s\n", argv[1]);
                printf("The second command line argument was %s\n", argv[2]);
                printf("argv[1] = %s, so it takes %d characters\n", argv[1], strlen(argv[1]));
                printf("argv[1] = %s was converted to a number %d\n", argv[1], n1);
                printf("To print %d requires nod = %d, nod1 = %d spaces\n", n1, nod(n1), nod1(n1));
                printf("argv[2] = %s, so it takes %d characters\n", argv[2], strlen(argv[2]));
                printf("argv[2] = %s was converted to a number %d\n", argv[2], n2);
                printf("To print %d requires nod = %d, nod1 = %d spaces\n", n2, nod(n2), nod1(n2));


            }else{
                printf("You have entered an invalid command line argument\n");
                printf("All command line arguments:\n");
                int i = 0;
                for(i; i < argc; i++){
                    printf("%s\n", argv[i]);
                }

            }


        }else{
            printf("You have entered an invalid command line argument\n");
            printf("All command line arguments:\n");
            int i = 0;
            for(i; i < argc; i++){
                printf("%s\n", argv[i]);
            }

        }

    }


    return 0;
}
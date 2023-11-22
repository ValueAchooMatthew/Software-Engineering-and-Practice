#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void show_arr(int arr[], int len){
    int k = 0;
    for(k; k < len; k++){
        printf("%d ", arr[k]);
    }
    printf("\n");
}

void show_arry1(int *arr, int len){
    int k = 0;
    for(k; k < len; k++){
        printf("%d ", arr[k]);
    }
    printf("\n");

}

int main(int argc, char *argv[]){
    
    int i = 0;
    if(argc != 2){
        printf("You have entered an incorrect number of command line arguments\n");
        printf("All command line arguments:\n");
        for(i; i < argc; i++){
            printf("%s\n", argv[i]);
        }
    }else{
        int n = atoi(argv[1]);
        if(n <= 0){
            printf("There was an error\n");
            printf("All command line arguments:\n");
            for(i; i < argc; i++){
                printf("%s\n", argv[i]);
            }
        }else{
            printf("The array will have size %d\n", n);
            int* pointer;
            pointer = (int*)malloc(n*sizeof(int));
            int j = 0;
            for(j; j < n; j++){
                pointer[j] = j;
            }
            show_arr(pointer, n);
            printf("Now with pointers\n");
            show_arry1(pointer, n);

        }
    }




    return 0;
}
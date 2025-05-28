//write  a program to allocate memory for 5 numbers . Then dynamically increase it to 8 numbers
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(5, sizeof(int));

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    ptr = (int *)realloc(ptr, 8 * sizeof(int)); //realloc function

    printf("Enter 3 more numbers: ");
    for (int i = 5; i < 8; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Stored numbers:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}

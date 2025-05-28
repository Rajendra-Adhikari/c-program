#include <stdio.h>

int main() {
    int  *p, i, j, temp, n;
  // Point the pointer to the base address of the array

    printf("Enter size of array: ");
    scanf("%d", &n);



    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);  // Using pointer arithmetic
    }

    // Bubble sort using pointer
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}

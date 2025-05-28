#include <stdio.h>

int main() {
    int i, j, temp, n, ar[20];

    // Taking array size input
    printf("Enter size of the array: ");
    scanf("%d", &n);

    // Taking array elements input
    printf("Enter %d elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Bubble Sort Algorithm
    for(i = 0; i < n - 1; i++) {  // Number of passes
        for(j = 0; j < n - i - 1; j++) {  // Compare adjacent elements
            if(ar[j] > ar[j + 1]) {
                // Swap if elements are in the wrong order
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array in ascending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}

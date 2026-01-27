
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, val;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the value to insert: ");
    scanf("%d", &val);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++; 
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}



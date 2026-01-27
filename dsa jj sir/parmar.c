
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE + 1];
    int n, i, val, pos;
    printf("Enter number of elements (sorted in ascending order): ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    for (pos = 0; pos < n; pos++) {
        if (val < arr[pos]) {
            break;
        }
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

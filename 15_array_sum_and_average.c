#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    printf("How many elements? ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}

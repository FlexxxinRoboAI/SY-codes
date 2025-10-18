#include <stdio.h>

int main() {
    int n, i, max;
    int arr[100];

    printf("Enter elements: ");
    scanf("%d", &n);

    printf("Enter elements are: %d\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];  // assume first element is max
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Maximum element = %d\n", max);

    return 0;
}

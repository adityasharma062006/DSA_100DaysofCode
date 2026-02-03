#include <stdio.h>

int main() {
    int n, i, k;
    int a[50];
    int count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        count++;
        if (a[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", count);
            return 0;
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d\n", count);

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n-1];  // since one number is missing

    printf("Enter %d numbers (from 1 to %d, one missing):\n", n-1, n);
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;

    printf("\nMissing number is: %d\n", missing);

    return 0;
}

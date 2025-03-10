#include <stdio.h>

int main() {
    int n, i, count;

    do {
        printf("Enter a Prime Number: ");
        scanf("%d", &n);

        count = 0;

        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("This is a Prime Number.\n");
        } else {
            printf("This is not a Prime Number. Try again.\n");
        }

    } while (count != 2);

    return 0;
}
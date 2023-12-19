#include <stdio.h>

int main() {
    int i, j, count;
    int a[] = {1, 1, 2, 8, 8, 3, 2, 2, 2, 5, 1, 1};
    int b[12]; // Increased the size to match the array 'a'
    int length = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < length; i++) {
        count = 0;
        
        // Initialize b[i] to -1 to avoid using uninitialized values
        b[i] = -1;

        for (j = 0; j <= i; j++) {
            if (a[i] == b[j]) {
                count++;
            }
        }

        if (count == 0) {
            b[i] = a[i];
            printf("%d ", b[i]);
        }
    }

    return 0;
}

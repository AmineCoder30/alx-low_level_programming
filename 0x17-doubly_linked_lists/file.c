#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int largestPalindrome = 0;
    int i, j;

    for (i = 999; i >= 100; i--) {
        for (j = 999; j >= 100; j--) {
            int product = i * j;
            if (product > largestPalindrome && isPalindrome(product)) {
                largestPalindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    fprintf(file, "%d", largestPalindrome);
    fclose(file);

    return 0;
}


#include <stdio.h>

int main()
{
    int dec, dec_copy, i, j, bin[200];
    printf("Enter a non-negative decimal number : ");
    scanf("%d", &dec);
    dec_copy = dec;
    i = 0;
    do {
        bin[i++] = dec_copy % 2;
        dec_copy /= 2;
    } while (dec_copy != 0);

    printf("Decimal\t: %d\nBinary\t: ", dec);
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    return 0;
}

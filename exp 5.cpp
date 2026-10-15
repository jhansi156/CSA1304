#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, zeros = 0, ones = 0, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    while (zeros < len && str[zeros] == '0')
        zeros++;

    for (i = zeros; i < len; i++) {
        if (str[i] != '1') {
            valid = 0;
            break;
        }
        ones++;
    }

    if (valid && zeros % 2 == 0)
        printf("String belongs to the CFG.");
    else
        printf("String does not belong to the CFG.");

    return 0;
}

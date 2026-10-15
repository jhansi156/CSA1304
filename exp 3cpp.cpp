#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    if (len < 2 || str[0] != '0' || str[len - 1] != '1') {
        valid = 0;
    }

    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("String belongs to the CFG.");
    else
        printf("String does not belong to the CFG.");

    return 0;
}

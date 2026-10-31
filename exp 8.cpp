#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    if (len >= 2 && str[0] == 'b' && str[len - 1] == 'a') {
        for (i = 0; i < len; i++) {
            if (str[i] != 'a' && str[i] != 'b')
                break;
        }

        if (i == len)
            printf("String accepted by NFA.\n");
        else
            printf("String rejected by NFA.\n");
    } else {
        printf("String rejected by NFA.\n");
    }

    return 0;
}

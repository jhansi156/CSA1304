#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a binary string: ");
    scanf("%99s", str);

    len = strlen(str);

    if (str[0] == '0' && str[len - 1] == '1') {
        for (i = 0; i < len; i++) {
            if (str[i] != '0' && str[i] != '1') {
                printf("Rejected");
                return 0;
            }
        }
        printf("Accepted");
    } else {
        printf("Rejected");
    }

    return 0;
}

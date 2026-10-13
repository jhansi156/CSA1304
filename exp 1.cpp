#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (str[0] == 'a' && str[n-1] == 'a')
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
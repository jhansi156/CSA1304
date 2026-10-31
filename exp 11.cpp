#include <stdio.h>

int n, e[10][10], visited[10];

void closure(int state)
{
    visited[state] = 1;

    for (int i = 0; i < n; i++)
    {
        if (e[state][i] == 1 && !visited[i])
            closure(i);
    }
}

int main()
{
    int i, j;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &e[i][j]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            visited[j] = 0;

        closure(i);

        printf("Epsilon closure of q%d = { ", i);

        for (j = 0; j < n; j++)
            if (visited[j])
                printf("q%d ", j);

        printf("}\n");
    }

    return 0;
}

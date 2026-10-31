#include <stdio.h>
int main() {
    int n, e, i, j, k, a, b;
    int eps[10][10] = {0};
    int closure[10][10] = {0};

    printf("Enter number of states: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid number of states.\n");
        return 1;
    }

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &e);

    if (e < 0 || e > 100) {
        printf("Invalid number of transitions.\n");
        return 1;
    }

    printf("Enter transitions (from to):\n");
    for (i = 0; i < e; i++) {
        scanf("%d %d", &a, &b);

        if (a < 0 || a >= n || b < 0 || b >= n) {
            printf("Invalid state number.\n");
            return 1;
        }

        eps[a][b] = 1;
    }

    for (i = 0; i < n; i++) {
        closure[i][i] = 1;

        for (j = 0; j < n; j++) {
            closure[i][j] = eps[i][j] || closure[i][j];
        }
    }

    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (closure[i][k] && closure[k][j])
                    closure[i][j] = 1;
            }
        }
    }

    printf("\nEpsilon Closure of each state:\n");

    for (i = 0; i < n; i++) {
        printf("E-closure(q%d) = { ", i);

        for (j = 0; j < n; j++) {
            if (closure[i][j])
                printf("q%d ", j);
        }

        printf("}\n");
    }

    return 0;
}

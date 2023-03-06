#include <stdio.h>

int main()
{
    int x, y, z;
    if (scanf("%d", &x) != 1)
        return 1;
    if (scanf("%d", &y) != 1)
        return 1;
    if (scanf("%d", &z) != 1)
        return 1;

    if (x >= y && y >= z) {
        printf("OK\n");
    }
    else if (x <= y && y <= z) {
        printf("OK\n");
    }
    else {
        printf("NAO\n");
    }
    return 0;
}
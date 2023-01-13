#include <stdio.h>

int main()
{

    int xa, ya, xb, yb;
    scanf("%d %d", &xa, &ya);
    scanf("%d %d", &xb, &yb);
    printf("%d\n", (yb - ya) / (xb - xa));
    return 0;
}
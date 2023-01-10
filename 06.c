#include <stdio.h>

int main()
{
    int m;
    char mm[12][20] = {"Winter", "Winter", "Spring","Spring","Spring","Summer", "Summer", "Summer", "Autumn", "Autumn","Autumn", "Winter"};
    scanf("%d", &m);
    printf("%s\n", mm[m-1]);
    return 0;
}
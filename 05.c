#include <stdio.h>

int main()
{
    int a;
    int b = 1<<7;
    int c = 8;
    scanf("%d", &a );
    while(c--){
        printf("%d", a&b?1:0);
        b >>= 1;
    }
    return 0;
}